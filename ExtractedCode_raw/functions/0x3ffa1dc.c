// rea decompile_all
// name: std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::sync
// address: 0x3ffa1dc
// body: available
// range: 0x3ffa1dc-0x3ffa3d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::sync() */

void * __thiscall
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::sync
          (basic_filebuf<char,std::__ndk1::char_traits<char>> *this)

{
  long lVar1;
  byte bVar2;
  undefined1 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  size_t sVar8;
  long *plVar9;
  long *plVar10;
  void *extraout_x0;
  long lVar11;
  size_t __n;
  undefined1 auVar12 [16];
  long local_18;
  
  if (*(long *)(this + 0x78) == 0) {
    return (void *)0x0;
  }
  if (*(long **)(this + 0x80) == (long *)0x0) {
    auVar12 = FUN_03ff9c28();
    plVar9 = auVar12._0_8_;
    (**(code **)(*plVar9 + 0x30))();
    plVar10 = (long *)locale::use_facet(auVar12._8_8_,(id *)codecvt<char,char,mbstate_t>::id);
    lVar11 = *plVar10;
    plVar9[0x10] = (long)plVar10;
    bVar2 = *(byte *)((long)plVar9 + 0xa2);
    pvVar7 = (void *)(**(code **)(lVar11 + 0x38))();
    uVar5 = (uint)pvVar7 & 1;
    *(char *)((long)plVar9 + 0xa2) = (char)uVar5;
    if (bVar2 != uVar5) {
      plVar9[5] = 0;
      plVar9[4] = 0;
      plVar9[7] = 0;
      plVar9[6] = 0;
      plVar9[3] = 0;
      plVar9[2] = 0;
      if (((ulong)pvVar7 & 1) != 0) {
        if ((char)plVar9[0x14] != '\0') {
          pvVar7 = (void *)0x0;
          if ((void *)plVar9[8] != (void *)0x0) {
            operator_delete__((void *)plVar9[8]);
            pvVar7 = extraout_x0;
          }
        }
        uVar3 = *(undefined1 *)((long)plVar9 + 0xa1);
        *(undefined1 *)((long)plVar9 + 0xa1) = 0;
        *(undefined1 *)(plVar9 + 0x14) = uVar3;
        lVar11 = plVar9[0xd];
        lVar1 = plVar9[0xe];
        plVar9[0xd] = 0;
        plVar9[0xe] = 0;
        plVar9[8] = lVar11;
        plVar9[0xc] = lVar1;
        return pvVar7;
      }
      if (((char)plVar9[0x14] == '\0') && ((long *)plVar9[8] != plVar9 + 0xb)) {
        *(undefined1 *)((long)plVar9 + 0xa1) = 0;
        plVar9[0xd] = plVar9[8];
        plVar9[0xe] = plVar9[0xc];
        pvVar7 = operator_new__(plVar9[0xc]);
        plVar9[8] = (long)pvVar7;
        *(undefined1 *)(plVar9 + 0x14) = 1;
        return pvVar7;
      }
      plVar9[0xe] = plVar9[0xc];
      pvVar7 = operator_new__(plVar9[0xc]);
      plVar9[0xd] = (long)pvVar7;
      *(undefined1 *)((long)plVar9 + 0xa1) = 1;
    }
    return pvVar7;
  }
  if ((*(uint *)(this + 0x9c) >> 4 & 1) == 0) {
    if ((*(uint *)(this + 0x9c) >> 3 & 1) != 0) {
      local_18 = *(long *)(this + 0x90);
      if (this[0xa2] == (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) {
        uVar5 = (**(code **)(**(long **)(this + 0x80) + 0x30))();
        lVar11 = *(long *)(this + 0x50) - *(long *)(this + 0x48);
        if ((int)uVar5 < 1) {
          if (*(long *)(this + 0x18) == *(long *)(this + 0x20)) {
            bVar4 = false;
          }
          else {
            iVar6 = (**(code **)(**(long **)(this + 0x80) + 0x40))
                              (*(long **)(this + 0x80),&local_18,*(undefined8 *)(this + 0x40),
                               *(long *)(this + 0x48),
                               *(long *)(this + 0x18) - *(long *)(this + 0x10));
            bVar4 = true;
            lVar11 = (lVar11 + *(long *)(this + 0x48)) - (*(long *)(this + 0x40) + (long)iVar6);
          }
        }
        else {
          bVar4 = false;
          lVar11 = lVar11 + (*(long *)(this + 0x20) - *(long *)(this + 0x18)) * (ulong)uVar5;
        }
      }
      else {
        bVar4 = false;
        lVar11 = *(long *)(this + 0x20) - *(long *)(this + 0x18);
      }
      iVar6 = fseeko(*(FILE **)(this + 0x78),-lVar11,1);
      if (iVar6 != 0) {
        return (void *)0xffffffff;
      }
      if (bVar4) {
        *(long *)(this + 0x88) = local_18;
      }
      *(undefined4 *)(this + 0x9c) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined8 *)(this + 0x20) = 0;
      *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x40);
      *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x40);
      *(undefined8 *)(this + 0x10) = 0;
      return (void *)0x0;
    }
    pvVar7 = (void *)0x0;
  }
  else if ((*(long *)(this + 0x30) == *(long *)(this + 0x28)) ||
          (pvVar7 = (void *)(**(code **)(*(long *)this + 0x68))(this,0xffffffff), (int)pvVar7 != -1)
          ) {
    do {
      iVar6 = (**(code **)(**(long **)(this + 0x80) + 0x28))
                        (*(long **)(this + 0x80),this + 0x88,*(long *)(this + 0x40),
                         *(long *)(this + 0x40) + *(long *)(this + 0x60),&local_18);
      __n = local_18 - (long)*(void **)(this + 0x40);
      sVar8 = fwrite(*(void **)(this + 0x40),1,__n,*(FILE **)(this + 0x78));
      if (sVar8 != __n) {
        return (void *)0xffffffff;
      }
    } while (iVar6 == 1);
    if ((iVar6 != 2) && (iVar6 = fflush(*(FILE **)(this + 0x78)), iVar6 == 0)) {
      return (void *)0x0;
    }
    return (void *)0xffffffff;
  }
  return pvVar7;
}

