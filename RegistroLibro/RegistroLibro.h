#pragma once
#include <vector>
#include <list>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include <sstream>
#include <string>

using namespace System;
using namespace System::IO;
using namespace cliext;

using namespace std;
using namespace System::Collections::Generic;

namespace RegistroLibro {
	public ref class Libro
	{
	public:
		property String^ Nro_ISBN;
		property String^ titulo;
		property String^ autor;
		property String^ genero;

		String^ getTitulo() {
			return titulo;
		}

		String^ getAutor() {
			return autor;
		}

		String^ getGenero() {
			return genero;
		}
		
		Libro(String^ Nro_ISBN, String^ titulo, String^ autor, String^ genero);
		Libro();
		virtual String^ ToString() override {
			return "NumeroISBN " + Nro_ISBN + "\r\n" +
				" Titulo: " + titulo + "\r\n" +
				" Autor: " + autor + "\r\n" +
				" Genero: " + genero + "\r\n";
		}


		String^ GetNro_ISBN() { return Nro_ISBN; }
		String^ GetTitulo() { return titulo; }
		String^ GetAutor() { return autor; }
		String^ GetGenero() { return genero; }

		void SetNro_ISBN(String^ Nro_ISBN) { this->Nro_ISBN = Nro_ISBN; }
		void SetTitulo(String^ titulo) { this->titulo = titulo; }
		void SetAutor(String^ autor) { this->autor = autor; }
		void SetGenero(String^ genero) { this->genero = genero; }


	};

	public ref class Nodo {
	public:
		Libro^ libro;
		Nodo^ izquierda;
		Nodo^ derecha;

		Nodo(Libro^ libro);

		Nodo();

		Libro^ GetLibro() { return libro; }
		void SetLibro(Libro^ libro) { this->libro = libro; }
		Nodo^ GetIzquierda() { return izquierda; }
		void SetIzquierda(Nodo^ izquierda) { this->izquierda = izquierda; }
		Nodo^ GetDerecha() { return derecha; }
		void SetDerecha(Nodo^ derecha) { this->derecha = derecha; }


	};

	public ref class ArbolBinarioBusqueda {
	private:
		Nodo^ raiz;


		Nodo^ insertRecursivo(Nodo^ nodo, Libro^ libro);
		Nodo^ buscarRecursivo(Nodo^ nodo, String^ nro_ISBN);
		Nodo^ eliminarRecursivo(Nodo^ nodo, String^ nro_ISBN);
		void GuardarNodo(StreamWriter^ archivo, Nodo^ nodo);
		Nodo^ minValorNodo(Nodo^ nodo);
		void inOrdenRecursivo(Nodo^ nodo, List<Libro^>^ libros);

	public:
		ArbolBinarioBusqueda() { raiz = nullptr; }

		void insertL(Libro^ libro);
		Libro^ BuscarLibro(String^ nro_ISBN);
		void EliminarLibro(String^ nro_ISBN);
		System::Collections::Generic::List<Libro^>^ listarLibros();

	};
}
