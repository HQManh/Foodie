// rea decompile_all
// name: Datpt.Cook_Order.LevelControlCookOrder$$Update
// address: 0x41afdf0
// body: available
// range: 0x41afdf0-0x41b01ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b01a4 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41b01a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_LevelControlCookOrder__Update
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_095168e7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09191508);
    FUN_03f5c2a4(&DAT_09191510);
    DAT_095168e7 = 1;
  }
  uVar1 = CakeOrder_InGame_LevelBaseCakeOrderAbstract__get_IsAllowInteract(param_4,0);
  if (((uVar1 & 1) == 0) || (*(char *)(param_4 + 0x100) == '\0')) {
    return;
  }
  uVar1 = UnityEngine_Input__GetMouseButtonDown(0,0);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_4 + 0x120) = 1;
    uVar8 = UnityEngine_Input__get_mousePosition(0);
    *(undefined4 *)(param_4 + 0x104) = uVar8;
    *(float *)(param_4 + 0x108) = param_2;
    *(float *)(param_4 + 0x10c) = param_3;
    lVar2 = Datpt_Cook_Order_LevelControlCookOrder__GetItemMovingCanMove(param_4);
    plVar6 = (long *)(param_4 + 0xd0);
    *plVar6 = lVar2;
    thunk_FUN_03f5d7b8(plVar6,lVar2);
    if (*plVar6 == 0) {
      plVar6 = (long *)Datpt_Cook_Order_LevelControlCookOrder__GetItemIdle(param_4);
      if (plVar6 != (long *)0x0) {
        lVar2 = *plVar6;
        uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar1 != 0) {
          piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_09191508) {
              puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 5) * 0x10 + 0x138);
              goto LAB_041aff20;
            }
            uVar1 = uVar1 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09191508,5);
LAB_041aff20:
        (*(code *)*puVar3)(plVar6,puVar3[1]);
      }
    }
    else {
      Datpt_Cook_Order_LevelControlCookOrder__SetItemMoving(param_4);
      lVar2 = *(long *)(param_4 + 0x128);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      }
    }
  }
  uVar1 = UnityEngine_Input__GetMouseButton(0,0);
  if ((uVar1 & 1) != 0) {
    plVar6 = *(long **)(param_4 + 0xd0);
    if (plVar6 == (long *)0x0) {
      return;
    }
    lVar2 = *plVar6;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09191510) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_041aff98;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09191510,0);
LAB_041aff98:
    lVar2 = (*(code *)*puVar3)(plVar6,puVar3[1]);
    fVar9 = (float)Datpt_Cook_Order_LevelControlCookOrder__GetPoint(param_4);
    if (lVar2 == 0) goto LAB_041b01a8;
    param_2 = param_2 + *(float *)(param_4 + 0xec);
    param_3 = *(float *)(param_4 + 0xf0) + 0.0;
    UnityEngine_Transform__set_position(fVar9 + *(float *)(param_4 + 0xe8),lVar2,0);
  }
  uVar1 = UnityEngine_Input__GetMouseButtonUp(0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  *(undefined1 *)(param_4 + 0x120) = 0;
  fVar9 = (float)UnityEngine_Input__get_mousePosition(0);
  plVar6 = (long *)(param_4 + 0xd0);
  *(float *)(param_4 + 0x110) = fVar9;
  *(float *)(param_4 + 0x114) = param_2;
  *(float *)(param_4 + 0x118) = param_3;
  if (*plVar6 == 0) {
    return;
  }
  fVar10 = ABS(*(float *)(param_4 + 0x108) - param_2);
  if ((*(float *)(param_4 + 0x11c) < fVar10) && (ABS(*(float *)(param_4 + 0x104) - fVar9) < fVar10))
  {
    FUN_039afee4(7,DAT_09191508);
    lVar2 = Datpt_Cook_Order_LevelControlCookOrder__GetItemIdle(param_4);
    if (lVar2 != 0) {
      FUN_039afee4(7,DAT_09191508,lVar2);
    }
  }
  plVar7 = (long *)*plVar6;
  if (plVar7 == (long *)0x0) {
LAB_041b01a8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar2 = *plVar7;
  uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar1 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_09191510) {
        puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_041b00c8;
      }
      uVar1 = uVar1 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar1 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09191510,0);
LAB_041b00c8:
  lVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
  if (lVar2 == 0) goto LAB_041b01a8;
  UnityEngine_Transform__get_position(lVar2,0);
  lVar2 = Datpt_Cook_Order_LevelControlCookOrder__GetItemMoving(param_4);
  plVar7 = (long *)(param_4 + 0xd8);
  *plVar7 = lVar2;
  uVar1 = thunk_FUN_03f5d7b8(plVar7,lVar2);
  if ((*plVar7 == 0) || (uVar1 = FUN_039aff78(3,DAT_09191508,*plVar7,*plVar6), (uVar1 & 1) == 0)) {
    uVar1 = Datpt_Cook_Order_LevelControlCookOrder__GetItemIdle(uVar1,*plVar6);
    if ((uVar1 & 1) != 0) {
      if (*plVar6 != 0) {
        FUN_039afee4(4,DAT_09191510);
      }
      goto LAB_041b0174;
    }
    if (*plVar6 != 0) {
      uVar4 = 5;
      goto LAB_041b0164;
    }
  }
  else {
    if (*plVar6 == 0) goto LAB_041b01a8;
    uVar4 = 4;
LAB_041b0164:
    FUN_039afee4(uVar4,DAT_09191510);
  }
  Datpt_Cook_Order_LevelControlCookOrder__SetItemMoving(param_4,0);
LAB_041b0174:
  lVar2 = *(long *)(param_4 + 0x130);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
  }
  *plVar6 = 0;
  thunk_FUN_03f5d7b8(plVar6,0);
  return;
}

