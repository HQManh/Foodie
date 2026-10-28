// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeWrapper$$get_Attributes
// address: 0x770c980
// body: available
// range: 0x770c980-0x770cd27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x770cc38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770cd10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770cd14 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770cd18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770cd1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770cd24 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0770cd20) */

long Newtonsoft_Json_Converters_XmlNodeWrapper__get_Attributes(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  
  if ((DAT_0952299f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ad7c8);
    FUN_03f5c2a4(&DAT_091ad7c0);
    FUN_03f5c2a4(&DAT_0917c448);
    FUN_03f5c2a4(&DAT_0918d458);
    FUN_03f5c2a4(&DAT_0918d620);
    DAT_0952299f = 1;
  }
  plVar11 = (long *)(param_1 + 0x20);
  if (*plVar11 == 0) {
    uVar3 = Newtonsoft_Json_Converters_XmlNodeWrapper__get_HasAttributes(param_1);
    if ((uVar3 & 1) != 0) {
      plVar4 = *(long **)(param_1 + 0x10);
      if ((plVar4 != (long *)0x0) &&
         (plVar4 = (long *)(**(code **)(*plVar4 + 0x218))(plVar4,*(undefined8 *)(*plVar4 + 0x220)),
         plVar4 != (long *)0x0)) {
        uVar2 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
        uVar5 = thunk_FUN_03f9944c(DAT_0917c448);
        FUN_057e0478(uVar5,uVar2,DAT_091ad7c0);
        *(undefined8 *)(param_1 + 0x20) = uVar5;
        thunk_FUN_03f5d7b8(plVar11,uVar5);
        plVar4 = *(long **)(param_1 + 0x10);
        if ((plVar4 != (long *)0x0) &&
           (plVar4 = (long *)(**(code **)(*plVar4 + 0x218))(plVar4,*(undefined8 *)(*plVar4 + 0x220))
           , plVar4 != (long *)0x0)) {
          plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
          do {
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = *plVar4;
            uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar3 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                  puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_0770cb28;
                }
                uVar3 = uVar3 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar3 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_0770cb28:
            uVar3 = (*(code *)*puVar6)(plVar4,puVar6[1]);
            if ((uVar3 & 1) == 0) {
              plVar4 = (long *)thunk_FUN_03f99350(plVar4,DAT_09185a58);
              if (plVar4 == (long *)0x0) goto LAB_0770ccf8;
              lVar8 = *plVar4;
              uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar3 == 0) goto LAB_0770cccc;
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              goto LAB_0770ccb4;
            }
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = *plVar4;
            uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar3 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_0770cb90;
                }
                uVar3 = uVar3 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar3 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,1);
LAB_0770cb90:
            plVar7 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
            if (plVar7 != (long *)0x0) {
              if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(DAT_0918d458 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(DAT_0918d458 + 0x130) * 8 +
                           -8) != DAT_0918d458)) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0();
              }
            }
            lVar12 = *plVar11;
            uVar5 = Newtonsoft_Json_Converters_XmlNodeWrapper__WrapNode();
            lVar8 = DAT_091ad7c8;
            if (lVar12 == 0) {
LAB_0770cd10:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar9 = *(long *)(lVar12 + 0x10);
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_0770cd10;
            uVar1 = *(uint *)(lVar12 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
              thunk_FUN_03f5d7b8();
            }
            else {
              FUN_057e0c68(lVar12,uVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
          } while( true );
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(DAT_0918d620 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    *plVar11 = **(long **)(DAT_0918d620 + 0xb8);
    thunk_FUN_03f5d7b8(plVar11);
  }
  goto LAB_0770ccf8;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar10 = piVar10 + 4;
    if (uVar3 == 0) break;
LAB_0770ccb4:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0770cce8;
    }
  }
LAB_0770cccc:
  puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_0770cce8:
  (*(code *)*puVar6)(plVar4,puVar6[1]);
LAB_0770ccf8:
  return *plVar11;
}

