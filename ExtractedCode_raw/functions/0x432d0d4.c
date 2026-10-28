// rea decompile_all
// name: CakeOrder.Home.UIListToolRecipeCard$$SetUp
// address: 0x432d0d4
// body: available
// range: 0x432d0d4-0x432d463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x432d460 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIListToolRecipeCard__SetUp
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  int iVar8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  if ((DAT_095176b4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b2f0);
    FUN_03f5c2a4(&DAT_0917b3d8);
    FUN_03f5c2a4(&DAT_0917b570);
    FUN_03f5c2a4(&DAT_0917b4a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095176b4 = 1;
  }
  *(undefined8 *)(param_1 + 0x60) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x60),param_2);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),param_3);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(param_4,0,0);
  if ((uVar2 & 1) != 0) {
    if (param_4 == 0) goto LAB_0432d460;
    plVar7 = *(long **)(param_4 + 0x20);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917b2f0) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0432d1f8;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b2f0,0);
LAB_0432d1f8:
      iVar1 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      if (0 < iVar1) {
        iVar8 = 0;
        do {
          lVar5 = *plVar7;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_0917b4a0) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_0432d26c;
              }
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b4a0,0);
LAB_0432d26c:
          lVar5 = (*(code *)*puVar3)(plVar7,iVar8,puVar3[1]);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar2 = UnityEngine_Object__op_Equality(lVar5,0,0);
          if ((uVar2 & 1) == 0) {
            if (lVar5 == 0) goto LAB_0432d460;
            uStack_60 = *(undefined8 *)(lVar5 + 0x18);
            local_68 = 0;
            local_58 = 0;
            thunk_FUN_03f5d7b8(&uStack_60);
            local_58 = lVar5;
            thunk_FUN_03f5d7b8(&local_58,lVar5);
            uStack_78 = uStack_60;
            local_80 = local_68;
            local_70 = local_58;
            CakeOrder_Home_UIListToolRecipeCard__SpawnItem(param_1,&local_80);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 != iVar1);
      }
    }
  }
  plVar7 = (long *)CakeOrder_Home_MapToolRecipeInfoProvider__GetRecipeIds();
  if (plVar7 != (long *)0x0) {
    lVar5 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917b3d8) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0432d358;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b3d8,0);
LAB_0432d358:
    iVar1 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if (0 < iVar1) {
      if (plVar7 == (long *)0x0) {
LAB_0432d460:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar8 = 0;
      do {
        lVar5 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_0917b570) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0432d3d4;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b570,0);
LAB_0432d3d4:
        uVar4 = (*(code *)*puVar3)(plVar7,iVar8,puVar3[1]);
        uVar2 = System_String__IsNullOrEmpty(uVar4,0);
        if ((uVar2 & 1) == 0) {
          local_58 = 0;
          local_68 = 1;
          uStack_60 = uVar4;
          thunk_FUN_03f5d7b8(&uStack_60,uVar4);
          local_58 = 0;
          thunk_FUN_03f5d7b8(&local_58,0);
          uStack_98 = uStack_60;
          local_a0 = local_68;
          local_90 = local_58;
          CakeOrder_Home_UIListToolRecipeCard__SpawnItem(param_1,&local_a0);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != iVar1);
    }
  }
  return;
}

