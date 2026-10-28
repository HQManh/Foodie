// rea decompile_all
// name: Newtonsoft.Json.JsonSerializer$$ApplySerializerSettings
// address: 0x764a3e4
// body: available
// range: 0x764a3e4-0x764ab2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x764ab28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonSerializer__ApplySerializerSettings(long *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  
  if ((DAT_0952233f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4f28);
    FUN_03f5c2a4(&DAT_0919b4a8);
    FUN_03f5c2a4(&DAT_0917a0c8);
    FUN_03f5c2a4(&DAT_0917b0b8);
    FUN_03f5c2a4(&DAT_091b6e10);
    FUN_03f5c2a4(&DAT_091b6de0);
    FUN_03f5c2a4(&DAT_091b6cf0);
    FUN_03f5c2a4(&DAT_091b7460);
    FUN_03f5c2a4(&DAT_091b7170);
    FUN_03f5c2a4(&DAT_091b75a0);
    FUN_03f5c2a4(&DAT_091b6b58);
    FUN_03f5c2a4(&DAT_091b7588);
    FUN_03f5c2a4(&DAT_091b6a60);
    FUN_03f5c2a4(&DAT_091b6c18);
    FUN_03f5c2a4(&DAT_091b7430);
    FUN_03f5c2a4(&DAT_091b6df8);
    FUN_03f5c2a4(&DAT_091b7190);
    FUN_03f5c2a4(&DAT_091b71e0);
    FUN_03f5c2a4(&DAT_091b6c98);
    FUN_03f5c2a4(&DAT_091b72c0);
    FUN_03f5c2a4(&DAT_091b7118);
    FUN_03f5c2a4(&DAT_091b7100);
    FUN_03f5c2a4(&DAT_091b6c30);
    DAT_0952233f = 1;
  }
  if (param_2 != 0) {
    uVar2 = FUN_04a68364(*(undefined8 *)(param_2 + 0xd8),DAT_091c4f28);
    if ((uVar2 & 1) != 0) {
LAB_0764a544:
      if (*(char *)(param_2 + 200) != '\0') {
        if ((DAT_09522358 & 1) == 0) {
          FUN_03f5c2a4(&DAT_091b7598);
          DAT_09522358 = 1;
        }
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        (**(code **)(*param_1 + 0x248))
                  (param_1,*(undefined4 *)(param_2 + 0xcc),*(undefined8 *)(*param_1 + 0x250));
      }
      if (*(char *)(param_2 + 0xd0) != '\0') {
        if ((DAT_0952235a & 1) == 0) {
          FUN_03f5c2a4(&DAT_091b70f8);
          DAT_0952235a = 1;
        }
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        (**(code **)(*param_1 + 0x388))
                  (param_1,*(undefined4 *)(param_2 + 0xd4),*(undefined8 *)(*param_1 + 0x390));
      }
      if (*(char *)(param_2 + 0x6c) != '\0') {
        if ((DAT_0952235c & 1) == 0) {
          FUN_03f5c2a4(&DAT_091b7580);
          DAT_0952235c = 1;
        }
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        (**(code **)(*param_1 + 0x288))
                  (param_1,*(undefined4 *)(param_2 + 0x70),*(undefined8 *)(*param_1 + 0x290));
      }
      if (*(char *)(param_2 + 0x7c) != '\0') {
        if ((DAT_09522356 & 1) == 0) {
          FUN_03f5c2a4(&DAT_091b71d8);
          DAT_09522356 = 1;
        }
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        (**(code **)(*param_1 + 0x2a8))
                  (param_1,*(undefined4 *)(param_2 + 0x80),*(undefined8 *)(*param_1 + 0x2b0));
      }
      if (*(char *)(param_2 + 0x9c) != '\0') {
        if ((DAT_0952234c & 1) == 0) {
          FUN_03f5c2a4(&DAT_091b72b0);
          DAT_0952234c = 1;
        }
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        (**(code **)(*param_1 + 0x2c8))
                  (param_1,*(undefined4 *)(param_2 + 0xa0),*(undefined8 *)(*param_1 + 0x2d0));
      }
      if (*(char *)(param_2 + 0x94) != '\0') {
        if ((DAT_0952234e & 1) == 0) {
          FUN_03f5c2a4(&DAT_091b7110);
          DAT_0952234e = 1;
        }
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        (**(code **)(*param_1 + 0x2e8))
                  (param_1,*(undefined4 *)(param_2 + 0x98),*(undefined8 *)(*param_1 + 0x2f0));
      }
      if (*(char *)(param_2 + 0x8c) != '\0') {
        if ((DAT_09522350 & 1) == 0) {
          FUN_03f5c2a4(&DAT_091b7180);
          DAT_09522350 = 1;
        }
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        (**(code **)(*param_1 + 0x348))
                  (param_1,*(undefined4 *)(param_2 + 0x90),*(undefined8 *)(*param_1 + 0x350));
      }
      if (*(char *)(param_2 + 0x84) != '\0') {
        if ((DAT_09522352 & 1) == 0) {
          FUN_03f5c2a4(&DAT_091b7168);
          DAT_09522352 = 1;
        }
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        (**(code **)(*param_1 + 0x308))
                  (param_1,*(undefined4 *)(param_2 + 0x88),*(undefined8 *)(*param_1 + 0x310));
      }
      if (*(char *)(param_2 + 0x74) != '\0') {
        if ((DAT_09522354 & 1) == 0) {
          FUN_03f5c2a4(&DAT_091b6ce0);
          DAT_09522354 = 1;
        }
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        (**(code **)(*param_1 + 0x328))
                  (param_1,*(undefined4 *)(param_2 + 0x78),*(undefined8 *)(*param_1 + 0x330));
      }
      if (*(char *)(param_2 + 0xc0) != '\0') {
        if ((DAT_0952235e & 1) == 0) {
          FUN_03f5c2a4(&DAT_091b6b50);
          DAT_0952235e = 1;
        }
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        (**(code **)(*param_1 + 0x368))
                  (param_1,*(undefined4 *)(param_2 + 0xc4),*(undefined8 *)(*param_1 + 0x370));
      }
      if (*(char *)(param_2 + 0xa8) != '\0') {
        auVar10 = Newtonsoft_Json_JsonSerializerSettings__get_Context(param_2);
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        (**(code **)(*param_1 + 0x3d8))
                  (param_1,auVar10._0_8_,auVar10._8_8_,*(undefined8 *)(*param_1 + 0x3e0));
      }
      if (*(char *)(param_2 + 0x50) != '\0') {
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        *(undefined2 *)((long)param_1 + 0xc1) = *(undefined2 *)(param_2 + 0x50);
      }
      if (*(long *)(param_2 + 0x108) != 0) {
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        (**(code **)(*param_1 + 0x178))
                  (param_1,*(long *)(param_2 + 0x108),*(undefined8 *)(*param_1 + 0x180));
      }
      if (*(long *)(param_2 + 0xe0) != 0) {
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        (**(code **)(*param_1 + 0x3b8))
                  (param_1,*(long *)(param_2 + 0xe0),*(undefined8 *)(*param_1 + 0x3c0));
      }
      lVar5 = *(long *)(param_2 + 0xf0);
      if (lVar5 != 0) {
        uVar3 = (**(code **)(lVar5 + 0x18))
                          (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        (**(code **)(*param_1 + 0x1a8))(param_1,uVar3,*(undefined8 *)(*param_1 + 0x1b0));
      }
      if (*(long *)(param_2 + 0xf8) != 0) {
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        (**(code **)(*param_1 + 0x208))
                  (param_1,*(long *)(param_2 + 0xf8),*(undefined8 *)(*param_1 + 0x210));
      }
      if (*(long *)(param_2 + 0xe8) != 0) {
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        (**(code **)(*param_1 + 0x228))
                  (param_1,*(long *)(param_2 + 0xe8),*(undefined8 *)(*param_1 + 0x230));
      }
      if (*(long *)(param_2 + 0x100) != 0) {
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        (**(code **)(*param_1 + 0x1e8))
                  (param_1,*(long *)(param_2 + 0x100),*(undefined8 *)(*param_1 + 0x1f0));
      }
      if (*(char *)(param_2 + 0x10) != '\0') {
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        param_1[0xf] = *(long *)(param_2 + 0x10);
      }
      if (*(char *)(param_2 + 0x18) != '\0') {
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        param_1[0x10] = *(long *)(param_2 + 0x18);
      }
      if (*(char *)(param_2 + 0x20) != '\0') {
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        param_1[0x11] = *(long *)(param_2 + 0x20);
      }
      if (*(char *)(param_2 + 0x28) != '\0') {
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        param_1[0x12] = *(long *)(param_2 + 0x28);
      }
      if (*(char *)(param_2 + 0x68) != '\0') {
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        param_1[0x19] = *(long *)(param_2 + 0x60);
        thunk_FUN_03f5d7b8(param_1 + 0x19);
        *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x68);
      }
      if (*(char *)(param_2 + 0x30) != '\0') {
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        param_1[0x13] = *(long *)(param_2 + 0x30);
      }
      if (*(char *)(param_2 + 0x38) != '\0') {
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        param_1[0x14] = *(long *)(param_2 + 0x38);
      }
      if (*(char *)(param_2 + 0x40) != '\0') {
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        param_1[0x15] = *(long *)(param_2 + 0x40);
      }
      if (*(long *)(param_2 + 0x48) != 0) {
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        param_1[0x16] = *(long *)(param_2 + 0x48);
        thunk_FUN_03f5d7b8();
      }
      if (*(char *)(param_2 + 0x5c) != '\0') {
        if (param_1 == (long *)0x0) goto LAB_0764ab28;
        param_1[0x17] = *(long *)(param_2 + 0x54);
        *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x5c);
      }
      return;
    }
    plVar9 = *(long **)(param_2 + 0xd8);
    if (plVar9 != (long *)0x0) {
      iVar8 = 0;
      do {
        lVar5 = *plVar9;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_0917a0c8) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0764aa70;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a0c8,0);
LAB_0764aa70:
        iVar1 = (*(code *)*puVar4)(plVar9,puVar4[1]);
        if (iVar1 <= iVar8) goto LAB_0764a544;
        if (param_1 == (long *)0x0) break;
        lVar5 = (**(code **)(*param_1 + 0x398))(param_1,*(undefined8 *)(*param_1 + 0x3a0));
        plVar9 = *(long **)(param_2 + 0xd8);
        if (plVar9 == (long *)0x0) break;
        lVar6 = *plVar9;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_0917b0b8) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0764aaf4;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917b0b8,0);
LAB_0764aaf4:
        uVar3 = (*(code *)*puVar4)(plVar9,iVar8,puVar4[1]);
        if (lVar5 == 0) break;
        FUN_06c77af0(lVar5,iVar8,uVar3,DAT_0919b4a8);
        plVar9 = *(long **)(param_2 + 0xd8);
        iVar8 = iVar8 + 1;
      } while (plVar9 != (long *)0x0);
    }
  }
LAB_0764ab28:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

