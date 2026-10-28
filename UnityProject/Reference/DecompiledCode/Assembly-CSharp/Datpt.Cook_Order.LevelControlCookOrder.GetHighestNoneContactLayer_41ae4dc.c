// rea decompile_all
// name: Datpt.Cook_Order.LevelControlCookOrder$$GetHighestNoneContactLayer
// address: 0x41ae4dc
// body: available
// range: 0x41ae4dc-0x41ae783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ae77c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ae780 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int Datpt_Cook_Order_LevelControlCookOrder__GetHighestNoneContactLayer
              (undefined4 param_1,undefined4 param_2,long param_3,long *param_4,int param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if ((DAT_095168ef & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c53b8);
    FUN_03f5c2a4(&DAT_09191508);
    FUN_03f5c2a4(&DAT_091871d0);
    FUN_03f5c2a4(&DAT_09189078);
    DAT_095168ef = 1;
  }
  if (DAT_09515ce8 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce8 = '\x01';
  }
  uVar10 = **(undefined4 **)(DAT_0918cb68 + 0xb8);
  uVar11 = (*(undefined4 **)(DAT_0918cb68 + 0xb8))[1];
  if (*(int *)(DAT_09189078 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = UnityEngine_Physics2D__RaycastAll(param_1,param_2,uVar10,uVar11,0);
  if (lVar2 != 0) {
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar9 = 0;
      uVar7 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar3 = UnityEngine_RaycastHit2D__get_collider(lVar2 + 0x20 + uVar9 * 0x24,0);
        if (lVar3 == 0) goto LAB_041ae77c;
        uVar4 = FUN_04a6a14c(lVar3,DAT_091c53b8);
        *(undefined8 *)(param_3 + 0x138) = uVar4;
        thunk_FUN_03f5d7b8(param_3 + 0x138,uVar4);
        plVar5 = *(long **)(param_3 + 0x138);
        if ((plVar5 != (long *)0x0) && (plVar5 != param_4)) {
          lVar3 = *plVar5;
          if ((*(byte *)(lVar3 + 0x130) < *(byte *)(DAT_091871d0 + 0x130)) ||
             (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(DAT_091871d0 + 0x130) * 8 + -8) !=
              DAT_091871d0)) goto LAB_041ae77c;
          uVar7 = (**(code **)(lVar3 + 0x318))(plVar5,*(undefined8 *)(lVar3 + 800));
          if ((uVar7 & 1) == 0) {
            plVar5 = *(long **)(param_3 + 0x138);
            if (plVar5 == (long *)0x0) goto LAB_041ae77c;
            lVar3 = *plVar5;
            uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == DAT_09191508) {
                  puVar6 = (undefined8 *)(lVar3 + (long)(*piVar8 + 10) * 0x10 + 0x138);
                  goto LAB_041ae6c8;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09191508,10);
LAB_041ae6c8:
            iVar1 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            if (param_5 < iVar1) {
              plVar5 = *(long **)(param_3 + 0x138);
              if (plVar5 == (long *)0x0) goto LAB_041ae77c;
              lVar3 = *plVar5;
              uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == DAT_09191508) {
                    puVar6 = (undefined8 *)(lVar3 + (long)(*piVar8 + 10) * 0x10 + 0x138);
                    goto LAB_041ae734;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09191508,10);
LAB_041ae734:
              param_5 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            }
          }
        }
        uVar7 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    return param_5;
  }
LAB_041ae77c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

