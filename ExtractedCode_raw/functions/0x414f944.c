// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamOrderStrategy$$BuildIdOffers
// address: 0x414f944
// body: available
// range: 0x414f944-0x414fcef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414fc40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414fcd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414fcdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414fce0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414fce4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414fcec to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0414fce8) */

long AnhPD_FoodOrder_IceCreamOrderStrategy__BuildIdOffers(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  long **pplStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  
  if ((DAT_09516468 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fc08);
    FUN_03f5c2a4(&DAT_0919fc18);
    FUN_03f5c2a4(&DAT_09176b98);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a2f8);
    FUN_03f5c2a4(&DAT_0917a980);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09186a58);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189150);
    DAT_09516468 = 1;
  }
  local_58 = (long *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_70 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_09176b98);
  FUN_06fd76bc(lVar2,DAT_0919fc08);
  if (*(int *)(DAT_09186a58 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = AnhPD_FoodOrder_IceCreamOrderStrategy__get_Config();
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar4 = UnityEngine_Object__op_Equality(lVar3,0,0);
  if ((uVar4 & 1) != 0) {
    return lVar2;
  }
  if ((lVar3 == 0) ||
     (plVar5 = (long *)AnhPD_FoodOrder_RecipeConfigSO__OfferingIngredients(lVar3,0),
     plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = *plVar5;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_0917a2f8) {
        puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0414fad4;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar4 != 0);
  }
  puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917a2f8,0);
LAB_0414fad4:
  plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  pplStack_78 = &local_58;
  local_80 = 0;
  do {
    local_58 = plVar5;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185b10) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0414fb68;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_0414fb68:
    uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    plVar5 = local_58;
    if ((uVar4 & 1) == 0) {
      if (local_58 == (long *)0x0) {
        return lVar2;
      }
      lVar3 = *local_58;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_0414fc8c;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *local_58;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917a980) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0414fbcc;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(local_58,DAT_0917a980,0);
LAB_0414fbcc:
    (*(code *)*puVar6)(&local_a0,plVar5,puVar6[1]);
    uVar1 = local_a0;
    uStack_68 = uStack_90;
    local_70 = local_98;
    local_60 = local_88;
    lVar3 = thunk_FUN_03f9944c(DAT_09189150);
    AnhPD_FoodOrder_PieceOffer___ctor(lVar3,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(lVar3 + 0x28) = 1;
    *(undefined4 *)(lVar3 + 0x2c) = 1;
    *(undefined8 *)(lVar3 + 0x18) = uStack_68;
    *(undefined8 *)(lVar3 + 0x10) = local_70;
    *(undefined8 *)(lVar3 + 0x20) = local_60;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06fd8440(lVar2,uVar1,lVar3,DAT_0919fc18);
    plVar5 = local_58;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar7 = piVar7 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0414fca8;
    }
  }
LAB_0414fc8c:
  puVar6 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185a58,0);
LAB_0414fca8:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return lVar2;
}

