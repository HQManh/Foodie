// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIItemLoginDayReward$$AddRewardView
// address: 0x42eda64
// body: available
// range: 0x42eda64-0x42edd9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42edd70 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42edd94 to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42edd98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIItemLoginDayReward__AddRewardView
               (long param_1,long param_2,long *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  
  if ((DAT_09517492 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186500);
    FUN_03f5c2a4(&DAT_091ad880);
    FUN_03f5c2a4(&DAT_091b0ad0);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517492 = 1;
  }
  if (param_4[1] != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Inequality(param_2,0,0);
    if ((uVar3 & 1) != 0) {
      plVar10 = (long *)param_4[1];
      if (plVar10 == (long *)0x0) goto LAB_042edd98;
      lVar7 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09186500) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_042edb68;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09186500,5);
LAB_042edb68:
      uVar5 = (*(code *)*puVar4)(plVar10,puVar4[1]);
      if (param_2 == 0) goto LAB_042edd98;
      UnityEngine_UI_Image__set_sprite(param_2,uVar5,0);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Inequality(param_3,0,0);
    if ((uVar3 & 1) != 0) {
      plVar10 = (long *)param_4[1];
      if (plVar10 == (long *)0x0) goto LAB_042edd98;
      lVar7 = *plVar10;
      uVar1 = *(undefined4 *)(param_4 + 2);
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09186500) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
            goto LAB_042edc10;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09186500,7);
LAB_042edc10:
      uVar5 = (*(code *)*puVar4)(plVar10,uVar1,puVar4[1]);
      if (param_3 == (long *)0x0) goto LAB_042edd98;
      (**(code **)(*param_3 + 0x558))(param_3,uVar5,*(undefined8 *)(*param_3 + 0x560));
    }
  }
  lVar7 = DAT_091ad880;
  lVar6 = *(long *)(param_1 + 0xa8);
  if (lVar6 != 0) {
    lVar8 = *(long *)(lVar6 + 0x10);
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar2 = *(uint *)(lVar6 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
        plVar10 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
        *plVar10 = param_2;
        thunk_FUN_03f5d7b8(plVar10,param_2);
      }
      else {
        FUN_057e0c68(lVar6,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                    );
      }
      lVar7 = DAT_091b0ad0;
      lVar6 = *(long *)(param_1 + 0xb0);
      if (lVar6 != 0) {
        lVar8 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar2 = *(uint *)(lVar6 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
            plVar10 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
            *plVar10 = (long)param_3;
            thunk_FUN_03f5d7b8(plVar10,param_3);
          }
          else {
            FUN_057e0c68(lVar6,param_3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          lVar7 = DAT_091b0570;
          lVar6 = *(long *)(param_1 + 0xb8);
          if (lVar6 != 0) {
            lVar8 = *(long *)(lVar6 + 0x10);
            uVar5 = *param_4;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar2 = *(uint *)(lVar6 + 0x18);
              if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
                thunk_FUN_03f5d7b8();
                return;
              }
              FUN_057e0c68(lVar6,uVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              return;
            }
          }
        }
      }
    }
  }
LAB_042edd98:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

