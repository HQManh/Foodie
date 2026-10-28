// rea decompile_all
// name: std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::underflow
// address: 0x3ff9934
// body: available
// range: 0x3ff9934-0x3ff9bcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::underflow() */

ulong __thiscall
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::underflow
          (basic_filebuf<char,std::__ndk1::char_traits<char>> *this)

{
  basic_filebuf<char,std::__ndk1::char_traits<char>> *pbVar1;
  void *__src;
  uint uVar2;
  long *plVar3;
  int iVar4;
  size_t sVar5;
  long *plVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  basic_filebuf<char,std::__ndk1::char_traits<char>> *pbVar11;
  ulong uVar12;
  byte *local_40;
  undefined1 uStack_31;
  
  pbVar9 = &stack0xffffffffffffffd0;
  if (*(long *)(this + 0x78) == 0) {
    return 0xffffffff;
  }
  uVar2 = *(uint *)(this + 0x9c);
  if ((uVar2 >> 3 & 1) == 0) {
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    pbVar1 = this + 0x70;
    pbVar11 = this + 0x68;
    if (this[0xa2] != (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) {
      pbVar1 = this + 0x60;
      pbVar11 = this + 0x40;
    }
    lVar10 = *(long *)pbVar11;
    lVar7 = *(long *)pbVar1;
    *(undefined4 *)(this + 0x9c) = 8;
    pbVar8 = (byte *)(lVar10 + lVar7);
    *(long *)(this + 0x10) = lVar10;
    *(byte **)(this + 0x18) = pbVar8;
    *(byte **)(this + 0x20) = pbVar8;
    if (pbVar8 == (byte *)0x0) goto LAB_03ff9a0c;
LAB_03ff99a8:
    pbVar9 = pbVar8;
    pbVar8 = *(byte **)(this + 0x20);
    if ((uVar2 >> 3 & 1) != 0) goto LAB_03ff9a24;
LAB_03ff99b0:
    uVar12 = 0;
    if (pbVar9 == pbVar8) {
LAB_03ff9a4c:
      memmove(*(void **)(this + 0x10),pbVar9 + -uVar12,uVar12);
      if (this[0xa2] == (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) {
        __src = *(void **)(this + 0x48);
        lVar7 = *(long *)(this + 0x50);
        sVar5 = lVar7 - (long)__src;
        lVar10 = lVar7;
        if (sVar5 != 0) {
          memmove(*(void **)(this + 0x40),__src,sVar5);
          lVar7 = *(long *)(this + 0x48);
          lVar10 = *(long *)(this + 0x50);
        }
        pbVar11 = *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x40);
        pbVar1 = pbVar11 + (lVar10 - lVar7);
        lVar7 = 8;
        if (pbVar11 != this + 0x58) {
          lVar7 = *(long *)(this + 0x60);
        }
        *(undefined8 *)(this + 0x90) = *(undefined8 *)(this + 0x88);
        sVar5 = (long)(pbVar11 + lVar7) - (long)pbVar1;
        *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x48) = pbVar1;
        *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x50) = pbVar11 + lVar7;
        if (*(long *)(this + 0x70) - uVar12 <= sVar5) {
          sVar5 = *(long *)(this + 0x70) - uVar12;
        }
        sVar5 = fread(pbVar1,1,sVar5,*(FILE **)(this + 0x78));
        if (sVar5 != 0) {
          plVar6 = *(long **)(this + 0x80);
          if (plVar6 == (long *)0x0) {
            lVar7 = FUN_03ff9c28();
            uVar2 = *(uint *)(lVar7 + 0x9c);
            if ((uVar2 >> 3 & 1) == 0) {
              *(undefined8 *)(lVar7 + 0x28) = 0;
              *(undefined8 *)(lVar7 + 0x30) = 0;
              *(undefined8 *)(lVar7 + 0x38) = 0;
              plVar6 = (long *)(lVar7 + 0x70);
              plVar3 = (long *)(lVar7 + 0x68);
              if (*(char *)(lVar7 + 0xa2) != '\0') {
                plVar6 = (long *)(lVar7 + 0x60);
                plVar3 = (long *)(lVar7 + 0x40);
              }
              lVar10 = *plVar3 + *plVar6;
              *(long *)(lVar7 + 0x10) = *plVar3;
              *(long *)(lVar7 + 0x18) = lVar10;
              *(long *)(lVar7 + 0x20) = lVar10;
              *(undefined4 *)(lVar7 + 0x9c) = 8;
            }
            return (ulong)((uVar2 & 8) == 0);
          }
          lVar7 = *plVar6;
          *(size_t *)(this + 0x50) = *(long *)(this + 0x48) + sVar5;
          iVar4 = (**(code **)(lVar7 + 0x20))
                            (plVar6,this + 0x88,*(undefined8 *)(this + 0x40),
                             *(long *)(this + 0x48) + sVar5,this + 0x48,
                             *(long *)(this + 0x10) + uVar12,
                             *(long *)(this + 0x10) + *(long *)(this + 0x70),&local_40);
          if (iVar4 == 3) {
            pbVar9 = *(byte **)(this + 0x40);
            local_40 = *(byte **)(this + 0x50);
            *(byte **)(this + 0x10) = pbVar9;
          }
          else {
            pbVar9 = (byte *)(*(long *)(this + 0x10) + uVar12);
            if (local_40 == pbVar9) goto LAB_03ff9b94;
          }
LAB_03ff9b78:
          *(byte **)(this + 0x18) = pbVar9;
          *(byte **)(this + 0x20) = local_40;
          uVar12 = (ulong)*pbVar9;
          if (*(undefined1 **)(this + 0x10) != &uStack_31) {
            return uVar12;
          }
          goto LAB_03ff9ba8;
        }
      }
      else {
        sVar5 = fread((void *)(uVar12 + *(long *)(this + 0x10)),1,
                      *(long *)(this + 0x20) - (long)(uVar12 + *(long *)(this + 0x10)),
                      *(FILE **)(this + 0x78));
        if (sVar5 != 0) {
          pbVar9 = (byte *)(*(long *)(this + 0x10) + uVar12);
          local_40 = pbVar9 + sVar5;
          goto LAB_03ff9b78;
        }
      }
LAB_03ff9b94:
      uVar12 = 0xffffffff;
      if (*(undefined1 **)(this + 0x10) != &uStack_31) {
        return 0xffffffff;
      }
      goto LAB_03ff9ba8;
    }
  }
  else {
    pbVar8 = *(byte **)(this + 0x18);
    if (pbVar8 != (byte *)0x0) goto LAB_03ff99a8;
LAB_03ff9a0c:
    *(undefined1 **)(this + 0x10) = &uStack_31;
    *(byte **)(this + 0x18) = pbVar9;
    *(byte **)(this + 0x20) = pbVar9;
    pbVar8 = pbVar9;
    if ((uVar2 >> 3 & 1) == 0) goto LAB_03ff99b0;
LAB_03ff9a24:
    lVar7 = (long)pbVar8 - *(long *)(this + 0x10);
    if (lVar7 < 0) {
      lVar7 = lVar7 + 1;
    }
    uVar12 = lVar7 >> 1;
    if (3 < uVar12) {
      uVar12 = 4;
    }
    if (pbVar9 == pbVar8) goto LAB_03ff9a4c;
  }
  uVar12 = (ulong)*pbVar9;
  if (*(undefined1 **)(this + 0x10) != &uStack_31) {
    return uVar12;
  }
LAB_03ff9ba8:
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  return uVar12;
}

