// rea decompile_all
// name: std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::overflow
// address: 0x3ff9cc4
// body: available
// range: 0x3ff9cc4-0x3ff9ed7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::overflow(int) */

int __thiscall
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::overflow
          (basic_filebuf<char,std::__ndk1::char_traits<char>> *this,int param_1)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  long *plVar4;
  size_t sVar5;
  undefined1 *puVar6;
  ulong uVar7;
  void *pvVar8;
  void *extraout_x8;
  long lVar9;
  void *pvVar10;
  long lVar11;
  void *local_58;
  long local_50;
  undefined1 local_41;
  
  if (*(long *)(this + 0x78) == 0) {
    return -1;
  }
  if (((byte)this[0x9c] >> 4 & 1) == 0) {
    uVar7 = *(ulong *)(this + 0x60);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    if (uVar7 < 9) {
      lVar11 = 0;
      pvVar10 = (void *)0x0;
      *(undefined8 *)(this + 0x28) = 0;
      *(undefined8 *)(this + 0x30) = 0;
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined4 *)(this + 0x9c) = 0x10;
      puVar6 = *(undefined1 **)(this + 0x30);
    }
    else {
      if (this[0xa2] == (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) {
        pvVar10 = *(void **)(this + 0x68);
        uVar7 = *(ulong *)(this + 0x70);
      }
      else {
        pvVar10 = *(void **)(this + 0x40);
      }
      *(void **)(this + 0x28) = pvVar10;
      *(void **)(this + 0x30) = pvVar10;
      lVar11 = (long)pvVar10 + (uVar7 - 1);
      *(long *)(this + 0x38) = lVar11;
      *(undefined4 *)(this + 0x9c) = 0x10;
      puVar6 = *(undefined1 **)(this + 0x30);
    }
  }
  else {
    pvVar10 = *(void **)(this + 0x28);
    puVar6 = *(undefined1 **)(this + 0x30);
    lVar11 = *(long *)(this + 0x38);
  }
  if (param_1 == -1) {
    sVar5 = (long)puVar6 - (long)pvVar10;
    pvVar8 = pvVar10;
  }
  else {
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &local_41;
      *(undefined1 **)(this + 0x28) = puVar6;
      *(undefined1 **)(this + 0x30) = puVar6;
      *(undefined1 **)(this + 0x38) = &stack0xffffffffffffffc0;
    }
    *puVar6 = (char)param_1;
    puVar6 = (undefined1 *)(*(long *)(this + 0x30) + 1);
    *(undefined1 **)(this + 0x30) = puVar6;
    sVar5 = (long)puVar6 - (long)*(void **)(this + 0x28);
    pvVar8 = *(void **)(this + 0x28);
  }
  if (sVar5 != 0) {
    if (this[0xa2] == (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) {
      local_50 = *(long *)(this + 0x40);
      plVar4 = *(long **)(this + 0x80);
      while (plVar4 != (long *)0x0) {
        uVar1 = (**(code **)(*plVar4 + 0x18))
                          (plVar4,this + 0x88,pvVar8,puVar6,&local_58,*(long *)(this + 0x40),
                           *(long *)(this + 0x40) + *(long *)(this + 0x60),&local_50);
        pvVar8 = *(void **)(this + 0x28);
        if (local_58 == pvVar8) {
          return -1;
        }
        if (uVar1 == 3) goto LAB_03ff9e94;
        if (1 < uVar1) {
          return -1;
        }
        sVar3 = local_50 - (long)*(void **)(this + 0x40);
        sVar5 = fwrite(*(void **)(this + 0x40),1,sVar3,*(FILE **)(this + 0x78));
        if (sVar5 != sVar3) {
          return -1;
        }
        if (uVar1 != 1) goto LAB_03ff9ddc;
        puVar6 = *(undefined1 **)(this + 0x30);
        plVar4 = *(long **)(this + 0x80);
        *(void **)(this + 0x28) = local_58;
        *(undefined1 **)(this + 0x38) = puVar6;
        pvVar8 = local_58;
      }
      FUN_03ff9c28();
      pvVar8 = extraout_x8;
LAB_03ff9e94:
      lVar9 = *(long *)(this + 0x30);
      sVar5 = fwrite(pvVar8,1,lVar9 - (long)pvVar8,*(FILE **)(this + 0x78));
      if (sVar5 != lVar9 - (long)pvVar8) {
        return -1;
      }
    }
    else {
      sVar3 = fwrite(pvVar8,1,sVar5,*(FILE **)(this + 0x78));
      if (sVar3 != sVar5) {
        return -1;
      }
    }
LAB_03ff9ddc:
    *(void **)(this + 0x28) = pvVar10;
    *(void **)(this + 0x30) = pvVar10;
    *(long *)(this + 0x38) = lVar11;
  }
  iVar2 = 0;
  if (param_1 != -1) {
    iVar2 = param_1;
  }
  return iVar2;
}

