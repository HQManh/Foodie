// rea decompile_all
// name: FUN_03fb6cf8
// address: 0x3fb6cf8
// body: available
// range: 0x3fb6cf8-0x3fb7043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fb6cf8(long *param_1)

{
  void *pvVar1;
  char *pcVar2;
  bool bVar3;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  void *pvVar11;
  basic_string local_98 [8];
  ulong local_90;
  char *local_88;
  undefined1 uStack_79;
  byte local_78 [16];
  void *local_68;
  
  pvVar11 = (void *)((ulong)local_78 | 1);
  do {
    pcVar5 = (char *)param_1[2];
    pcVar2 = (char *)param_1[3];
    if ((pcVar2 <= pcVar5) || (*pcVar5 != ',')) {
      return 1;
    }
    pcVar5 = pcVar5 + 1;
    param_1[2] = (long)pcVar5;
    pcVar6 = pcVar5;
    if (pcVar5 < pcVar2) {
      lVar9 = (long)pcVar2 - (long)pcVar5;
      do {
        if ((*pcVar5 != ' ') && (pcVar6 = pcVar5, *pcVar5 != '\t')) break;
        pcVar5 = pcVar5 + 1;
        lVar9 = lVar9 + -1;
        param_1[2] = (long)pcVar5;
        pcVar6 = pcVar2;
      } while (lVar9 != 0);
    }
    pcVar5 = pcVar6;
    if (pcVar2 <= pcVar6) {
      return 0;
    }
    do {
      if (*pcVar5 == '=') break;
      pcVar5 = pcVar5 + 1;
      param_1[2] = (long)pcVar5;
    } while (pcVar5 < pcVar2);
    FUN_03f67c24(local_78,pcVar6,pcVar5,(long)pcVar5 - (long)pcVar6);
    pcVar5 = (char *)param_1[2];
    pcVar2 = (char *)param_1[3];
    if ((pcVar5 < pcVar2) && (*pcVar5 == '=')) {
      pcVar6 = pcVar5 + 1;
      param_1[2] = (long)pcVar6;
      if (pcVar2 <= pcVar6) goto LAB_03fb6e8c;
      pcVar10 = pcVar2 + ~(ulong)pcVar5;
      pcVar5 = pcVar6;
      do {
        pcVar7 = pcVar5;
        if ((*pcVar5 == ',') || (*pcVar5 == ']')) break;
        pcVar5 = pcVar5 + 1;
        pcVar10 = pcVar10 + -1;
        param_1[2] = (long)pcVar5;
        pcVar7 = pcVar2;
      } while (pcVar10 != (char *)0x0);
      FUN_03f67c24(local_98,pcVar6,pcVar7,(long)pcVar7 - (long)pcVar6);
      uVar4 = FUN_03f9492c(&uStack_79,local_78,"version");
      if ((uVar4 & 1) == 0) {
        pvVar1 = pvVar11;
        if ((local_78[0] & 1) != 0) {
          pvVar1 = local_68;
        }
        uVar4 = FUN_03f947e4(&uStack_79,pvVar1,"publickey");
        if ((uVar4 & 1) != 0) {
          uVar4 = FUN_03f9492c(&uStack_79,local_98,&DAT_01a48046);
          if ((uVar4 & 1) == 0) {
            this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(*param_1 + 0x60);
LAB_03fb6f80:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            operator=(this,local_98);
          }
          goto LAB_03fb6f88;
        }
        pvVar1 = pvVar11;
        if ((local_78[0] & 1) != 0) {
          pvVar1 = local_68;
        }
        uVar4 = FUN_03f947e4(&uStack_79,pvVar1,"publickeytoken");
        if ((uVar4 & 1) == 0) {
          pvVar1 = pvVar11;
          if ((local_78[0] & 1) != 0) {
            pvVar1 = local_68;
          }
          uVar4 = FUN_03f947e4(&uStack_79,pvVar1,"culture");
          if ((uVar4 & 1) != 0) {
            this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(*param_1 + 0x48);
            goto LAB_03fb6f80;
          }
          pvVar1 = pvVar11;
          if ((local_78[0] & 1) != 0) {
            pvVar1 = local_68;
          }
          uVar4 = FUN_03f947e4(&uStack_79,pvVar1,"contenttype");
          if ((uVar4 & 1) == 0) goto LAB_03fb6e84;
          uVar4 = FUN_03f9492c(&uStack_79,local_98,"windowsruntime");
          if ((uVar4 & 1) != 0) {
            lVar8 = *param_1;
            lVar9 = lVar8 + 0x31;
            if ((*(byte *)(lVar8 + 0x30) & 1) != 0) {
              lVar9 = *(long *)(lVar8 + 0x40);
            }
            uVar4 = FUN_03f947e4(&uStack_79,lVar9,"windowsruntimemetadata");
            if ((uVar4 & 1) == 0) {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((char *)(*param_1 + 0x30));
            }
          }
          goto LAB_03fb6f88;
        }
        uVar4 = FUN_03f9492c(&uStack_79,local_98,&DAT_01a48046);
        if ((uVar4 & 1) != 0) goto LAB_03fb6f88;
        uVar4 = (ulong)((byte)local_98[0] >> 1);
        if (((byte)local_98[0] & 1) != 0) {
          uVar4 = local_90;
        }
        if (uVar4 == 0x10) {
          pcVar5 = (char *)((ulong)local_98 | 1);
          if (((byte)local_98[0] & 1) != 0) {
            pcVar5 = local_88;
          }
          strncpy((char *)(*param_1 + 0x78),pcVar5,0x11);
          goto LAB_03fb6f88;
        }
LAB_03fb6e84:
        bVar3 = true;
      }
      else {
        lVar9 = *param_1;
        uVar4 = FUN_03fb7078(local_98,lVar9 + 0x98,lVar9 + 0x9a,lVar9 + 0x9c,lVar9 + 0x9e);
        if ((uVar4 & 1) == 0) goto LAB_03fb6e84;
LAB_03fb6f88:
        bVar3 = false;
      }
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
    }
    else {
LAB_03fb6e8c:
      bVar3 = true;
    }
    if ((local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    if (bVar3) {
      return 0;
    }
  } while( true );
}

