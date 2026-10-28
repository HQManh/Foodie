// rea decompile_all
// name: Datpt.Cook_Order.LevelControlCookOrder$$GetItemIdle
// address: 0x41b09d0
// body: available
// range: 0x41b09d0-0x41b0c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b0c10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b0c14 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Datpt_Cook_Order_LevelControlCookOrder__GetItemIdle
               (undefined1 param_1 [16],undefined4 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((DAT_095168e9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5588);
    FUN_03f5c2a4(&DAT_09191508);
    FUN_03f5c2a4(&DAT_09191510);
    FUN_03f5c2a4(&DAT_09189078);
    DAT_095168e9 = 1;
  }
  if (param_4 != (long *)0x0) {
    lVar6 = *param_4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09191510) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_041b0a8c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(param_4,DAT_09191510,0);
LAB_041b0a8c:
    lVar6 = (*(code *)*puVar2)(param_4,puVar2[1]);
    if (lVar6 != 0) {
      uVar11 = UnityEngine_Transform__get_position(lVar6,0);
      if (DAT_09515ce8 == '\0') {
        FUN_03f5c2a4(&DAT_0918cb68);
        DAT_09515ce8 = '\x01';
      }
      uVar12 = **(undefined4 **)(DAT_0918cb68 + 0xb8);
      uVar13 = (*(undefined4 **)(DAT_0918cb68 + 0xb8))[1];
      if (*(int *)(DAT_09189078 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = UnityEngine_Physics2D__RaycastAll(uVar11,param_2,uVar12,uVar13,0);
      if (lVar6 != 0) {
        iVar5 = (int)*(ulong *)(lVar6 + 0x18);
        bVar10 = 0 < iVar5;
        if (0 < iVar5) {
          uVar8 = 0;
          uVar7 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
          do {
            if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar3 = UnityEngine_RaycastHit2D__get_collider(lVar6 + 0x20 + uVar8 * 0x24,0);
            if (lVar3 == 0) goto LAB_041b0c10;
            plVar4 = (long *)FUN_04a6a14c(lVar3,DAT_091c5588);
            if (plVar4 != (long *)0x0) {
              lVar3 = *plVar4;
              uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar7 != 0) {
                piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == DAT_09191508) {
                    puVar2 = (undefined8 *)(lVar3 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                    goto LAB_041b0bc4;
                  }
                  uVar7 = uVar7 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar7 != 0);
              }
              puVar2 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09191508,3);
LAB_041b0bc4:
              uVar7 = (*(code *)*puVar2)(plVar4,param_4,puVar2[1]);
              if ((uVar7 & 1) != 0) {
                return bVar10;
              }
            }
            uVar1 = *(uint *)(lVar6 + 0x18);
            uVar7 = (ulong)uVar1;
            uVar8 = uVar8 + 1;
            bVar10 = (long)uVar8 < (long)(int)uVar1;
          } while ((long)uVar8 < (long)(int)uVar1);
        }
        return bVar10;
      }
    }
  }
LAB_041b0c10:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

