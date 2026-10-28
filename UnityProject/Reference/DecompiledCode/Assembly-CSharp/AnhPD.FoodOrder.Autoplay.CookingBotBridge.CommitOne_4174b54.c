// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotBridge$$CommitOne
// address: 0x4174b54
// body: available
// range: 0x4174b54-0x4174f03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4174e48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4174ee4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4174ee8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4174eec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4174ef0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4174ef4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4174ef8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4174f00 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04174efc) */

void AnhPD_FoodOrder_Autoplay_CookingBotBridge__CommitOne
               (undefined4 param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  
  if ((DAT_095165ea & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5a0);
    FUN_03f5c2a4(&DAT_0917ac50);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b2308);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918ee78);
    DAT_095165ea = 1;
  }
  uVar3 = AnhPD_FoodOrder_Autoplay_CookingBotBridge__ItemIdOf(param_3);
  if ((param_3 == 0) || (plVar11 = *(long **)(param_3 + 0x90), plVar11 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar7 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_0917a5a0) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_04174c58;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a5a0,0);
LAB_04174c58:
  plVar11 = (long *)(*(code *)*puVar4)(plVar11,puVar4[1]);
joined_r0x04174c70:
  do {
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_09185b10) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04174cec;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_04174cec:
    uVar9 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar11 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_04174e94;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      goto LAB_04174e7c;
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_0917ac50) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04174d50;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917ac50,0);
LAB_04174d50:
    lVar7 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(param_2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = AnhPD_FoodOrder_Autoplay_GraphNodeIdMap__PickupableNodeOf
                      (*(long *)(param_2 + 0x20),*(undefined8 *)(lVar7 + 0x10),0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar5,0,0);
  } while ((uVar9 & 1) != 0);
  lVar12 = *(long *)(param_2 + 0x38);
  lVar7 = thunk_FUN_03f9944c(DAT_0918ee78);
  System_Object___ctor(lVar7,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(lVar7 + 0x10) = uVar5;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x10),uVar5);
  *(undefined8 *)(lVar7 + 0x18) = uVar3;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x18),uVar3);
  *(undefined4 *)(lVar7 + 0x20) = param_1;
  lVar2 = DAT_091b2308;
  if (lVar12 != 0) {
    lVar8 = *(long *)(lVar12 + 0x10);
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *plVar6 = lVar7;
        thunk_FUN_03f5d7b8(plVar6,lVar7);
      }
      else {
        FUN_057e0c68(lVar12,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
        ;
      }
      goto joined_r0x04174c70;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_04174e7c:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_04174eb0;
    }
  }
LAB_04174e94:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185a58,0);
LAB_04174eb0:
  (*(code *)*puVar4)(plVar11,puVar4[1]);
  return;
}

