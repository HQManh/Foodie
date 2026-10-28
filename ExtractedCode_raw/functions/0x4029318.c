// rea decompile_all
// name: std::__ndk1::__time_get_storage<char>::__do_date_order
// address: 0x4029318
// body: available
// range: 0x4029318-0x40295af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__time_get_storage<char>::__do_date_order() const */

undefined8 __thiscall
std::__ndk1::__time_get_storage<char>::__do_date_order(__time_get_storage<char> *this)

{
  ulong uVar1;
  __time_get_storage<char> *p_Var2;
  __time_get_storage<char> _Var3;
  ulong uVar4;
  uint uVar5;
  
  _Var3 = this[0x3f8];
  uVar1 = (ulong)((byte)_Var3 >> 1);
  if (((byte)_Var3 & 1) != 0) {
    uVar1 = *(ulong *)(this + 0x400);
  }
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
    p_Var2 = this + 0x3f9;
    if (((byte)_Var3 & 1) != 0) {
      p_Var2 = *(__time_get_storage<char> **)(this + 0x408);
    }
    do {
      if (p_Var2[uVar4] == (__time_get_storage<char>)0x25) break;
      uVar5 = uVar5 + 1;
      uVar4 = (ulong)uVar5;
    } while (uVar4 < uVar1);
  }
  p_Var2 = this + 0x3f9;
  if (((byte)_Var3 & 1) != 0) {
    p_Var2 = *(__time_get_storage<char> **)(this + 0x408);
  }
  _Var3 = p_Var2[uVar5 + 1];
  if ((byte)_Var3 < 0x6d) {
    if (_Var3 != (__time_get_storage<char>)0x59) {
      if (_Var3 != (__time_get_storage<char>)0x64) {
        return 0;
      }
      for (uVar5 = uVar5 + 2;
          (uVar4 = (ulong)uVar5, uVar4 < uVar1 && (p_Var2[uVar4] != (__time_get_storage<char>)0x25))
          ; uVar5 = uVar5 + 1) {
      }
      if (uVar1 == uVar4) {
        return 0;
      }
      if (p_Var2[uVar5 + 1] != (__time_get_storage<char>)0x6d) {
        return 0;
      }
      for (uVar5 = uVar5 + 2;
          (uVar4 = (ulong)uVar5, uVar4 < uVar1 && (p_Var2[uVar4] != (__time_get_storage<char>)0x25))
          ; uVar5 = uVar5 + 1) {
      }
      if (uVar1 == uVar4) {
        return 0;
      }
      if (p_Var2[uVar5 + 1] == (__time_get_storage<char>)0x79) {
        return 1;
      }
      if (p_Var2[uVar5 + 1] != (__time_get_storage<char>)0x59) {
        return 0;
      }
      return 1;
    }
  }
  else {
    if (_Var3 == (__time_get_storage<char>)0x6d) {
      for (uVar5 = uVar5 + 2;
          (uVar4 = (ulong)uVar5, uVar4 < uVar1 && (p_Var2[uVar4] != (__time_get_storage<char>)0x25))
          ; uVar5 = uVar5 + 1) {
      }
      if (uVar1 == uVar4) {
        return 0;
      }
      if (p_Var2[uVar5 + 1] != (__time_get_storage<char>)0x64) {
        return 0;
      }
      for (uVar5 = uVar5 + 2;
          (uVar4 = (ulong)uVar5, uVar4 < uVar1 && (p_Var2[uVar4] != (__time_get_storage<char>)0x25))
          ; uVar5 = uVar5 + 1) {
      }
      if (uVar1 == uVar4) {
        return 0;
      }
      if (p_Var2[uVar5 + 1] == (__time_get_storage<char>)0x79) {
        return 2;
      }
      if (p_Var2[uVar5 + 1] != (__time_get_storage<char>)0x59) {
        return 0;
      }
      return 2;
    }
    if (_Var3 != (__time_get_storage<char>)0x79) {
      return 0;
    }
  }
  for (uVar5 = uVar5 + 2;
      (uVar4 = (ulong)uVar5, uVar4 < uVar1 && (p_Var2[uVar4] != (__time_get_storage<char>)0x25));
      uVar5 = uVar5 + 1) {
  }
  if (uVar1 != uVar4) {
    if (p_Var2[uVar5 + 1] == (__time_get_storage<char>)0x64) {
      for (uVar5 = uVar5 + 2;
          (uVar4 = (ulong)uVar5, uVar4 < uVar1 && (p_Var2[uVar4] != (__time_get_storage<char>)0x25))
          ; uVar5 = uVar5 + 1) {
      }
      if ((uVar1 != uVar4) && (p_Var2[uVar5 + 1] == (__time_get_storage<char>)0x6d)) {
        return 4;
      }
    }
    else if (p_Var2[uVar5 + 1] == (__time_get_storage<char>)0x6d) {
      for (uVar5 = uVar5 + 2;
          (uVar4 = (ulong)uVar5, uVar4 < uVar1 && (p_Var2[uVar4] != (__time_get_storage<char>)0x25))
          ; uVar5 = uVar5 + 1) {
      }
      if ((uVar1 != uVar4) && (p_Var2[uVar5 + 1] == (__time_get_storage<char>)0x64)) {
        return 3;
      }
    }
  }
  return 0;
}

