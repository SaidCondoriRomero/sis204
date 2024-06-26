#include "pch.h"
#include <cliext/vector>

#include "RegistroLibro.h"

RegistroLibro::Libro::Libro(String^ Nro_ISBN, String^ titulo, String^ autor, String^ genero)
{
	this->Nro_ISBN = Nro_ISBN;
	this->titulo = titulo;
	this->autor = autor;
	this->genero = genero;
}

RegistroLibro::Libro::Libro()
{
	this->Nro_ISBN = "";
	this->titulo = "";
	this->autor = "";
	this->genero = "";
}

RegistroLibro::Nodo::Nodo(Libro^ libro)
{
	this->libro = libro;
	this->izquierda = nullptr;
	this->derecha = nullptr;
}

RegistroLibro::Nodo::Nodo()
{
	//throw gcnew System::NotImplementedException();
}
//ojo
RegistroLibro::Nodo^ RegistroLibro::ArbolBinarioBusqueda::insertRecursivo(Nodo^ nodo, Libro^ libro)
{
	if (nodo == nullptr) {
		return gcnew Nodo(libro);
	}
	if (String::Compare(libro->Nro_ISBN, nodo->libro->Nro_ISBN) < 0) {
		nodo->izquierda = insertRecursivo(nodo->izquierda, libro);
	}
	else {
		nodo->derecha = insertRecursivo(nodo->derecha, libro);
	}
	return nodo;

	Console::WriteLine("Libro insertado: " + libro->ToString());

}

RegistroLibro::Nodo^ RegistroLibro::ArbolBinarioBusqueda::buscarRecursivo(Nodo^ nodo, String^ nro_ISBN)
{


	if (nodo == nullptr || nodo->libro->Nro_ISBN == nro_ISBN) {
		return nodo;
	}
	if (String::Compare(nro_ISBN, nodo->libro->Nro_ISBN) < 0) {
		return buscarRecursivo(nodo->izquierda, nro_ISBN);
	}
	else {
		return buscarRecursivo(nodo->derecha, nro_ISBN);
	}

}

RegistroLibro::Nodo^ RegistroLibro::ArbolBinarioBusqueda::eliminarRecursivo(Nodo^ nodo, String^ nro_ISBN)
{

	if (nodo == nullptr) return nodo;

	if (String::Compare(nro_ISBN, nodo->libro->Nro_ISBN) < 0) {
		nodo->izquierda = eliminarRecursivo(nodo->izquierda, nro_ISBN);
	}
	else if (String::Compare(nro_ISBN, nodo->libro->Nro_ISBN) > 0) {
		nodo->derecha = eliminarRecursivo(nodo->derecha, nro_ISBN);
	}
	else {
		if (nodo->izquierda == nullptr) {
			return nodo->derecha;
		}
		else if (nodo->derecha == nullptr) {
			return nodo->izquierda;
		}

		Nodo^ temp = minValorNodo(nodo->derecha);
		nodo->libro = temp->libro;
		nodo->derecha = eliminarRecursivo(nodo->derecha, temp->libro->Nro_ISBN);
	}
	return nodo;

}

void RegistroLibro::ArbolBinarioBusqueda::GuardarNodo(StreamWriter^ archivo, Nodo^ nodo)
{
	if (nodo != nullptr) {
		archivo->WriteLine(nodo->libro->Nro_ISBN + "," + nodo->libro->titulo + "," + nodo->libro->autor + "," + nodo->libro->genero);
		GuardarNodo(archivo, nodo->izquierda);
		GuardarNodo(archivo, nodo->derecha);
	}
}

RegistroLibro::Nodo^ RegistroLibro::ArbolBinarioBusqueda::minValorNodo(Nodo^ nodo)
{
	Nodo^ actual = nodo;
	while (actual->izquierda != nullptr) {
		actual = actual->izquierda;
	}
	return actual;
}

void RegistroLibro::ArbolBinarioBusqueda::inOrdenRecursivo(Nodo^ nodo, List<Libro^>^ libros)
{
	if (nodo != nullptr) {
		inOrdenRecursivo(nodo->izquierda, libros);
		libros->Add(nodo->libro);
		inOrdenRecursivo(nodo->derecha, libros);
	}
}

void RegistroLibro::ArbolBinarioBusqueda::insertL(Libro^ libro)
{
	raiz = insertRecursivo(raiz, libro);
}

RegistroLibro::Libro^ RegistroLibro::ArbolBinarioBusqueda::BuscarLibro(String^ nro_ISBN)
{
	Nodo^ resultado = buscarRecursivo(raiz, nro_ISBN);
	return resultado == nullptr ? nullptr : resultado->libro;

}

void RegistroLibro::ArbolBinarioBusqueda::EliminarLibro(String^ nro_ISBN)
{
	raiz = eliminarRecursivo(raiz, nro_ISBN);
}
/*
System::Collections::Generic::List<Libro^>^ RegistroLibro::ArbolBinarioBusqueda::listarLibros()
{
	throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí
}
*/
System::Collections::Generic::List<RegistroLibro::Libro^>^ RegistroLibro::ArbolBinarioBusqueda::listarLibros()
{
	System::Collections::Generic::List<Libro^>^ libros = gcnew System::Collections::Generic::List<Libro^>();
	inOrdenRecursivo(raiz, libros);
	return libros;

}
