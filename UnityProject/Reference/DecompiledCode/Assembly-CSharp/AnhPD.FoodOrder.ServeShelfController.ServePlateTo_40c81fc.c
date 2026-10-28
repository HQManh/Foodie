// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$ServePlateTo
// address: 0x40c81fc
// body: available
// range: 0x40c81fc-0x40c852f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c852c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_ServeShelfController__ServePlateTo
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  
  if ((DAT_09515fa4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_091a8600);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_091efa38);
    FUN_03f5c2a4(&DAT_091efa40);
    FUN_03f5c2a4(&DAT_091efa48);
    FUN_03f5c2a4(&DAT_09194400);
    FUN_03f5c2a4(&DAT_09222360);
    DAT_09515fa4 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09194400);
  AnhPD_FoodOrder_ServeShelfController_<>c__DisplayClass140_0___ctor(lVar2,0);
  if (lVar2 != 0) {
    plVar8 = (long *)(lVar2 + 0x10);
    *plVar8 = param_4;
    thunk_FUN_03f5d7b8(plVar8,param_4);
    puVar11 = (undefined8 *)(lVar2 + 0x18);
    *puVar11 = param_3;
    thunk_FUN_03f5d7b8(puVar11,param_3);
    *(long *)(lVar2 + 0x40) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x40),param_1);
    puVar12 = (undefined8 *)(lVar2 + 0x48);
    *puVar12 = param_2;
    thunk_FUN_03f5d7b8(puVar12,param_2);
    if (**(long **)(DAT_091881a0 + 0xb8) != 0) {
      plVar13 = (long *)(lVar2 + 0x30);
      *plVar13 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x180);
      thunk_FUN_03f5d7b8(plVar13);
      lVar3 = *plVar13;
      if (param_5 < 0) {
        if (lVar3 == 0) goto LAB_040c852c;
        uVar4 = AnhPD_FoodOrder_ServeService__TryReserve
                          (lVar3,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x10),
                           *(undefined8 *)(lVar2 + 0x18),lVar2 + 0x38,0);
      }
      else {
        if (lVar3 == 0) goto LAB_040c852c;
        uVar4 = AnhPD_FoodOrder_ServeService__TryReserveOrder
                          (lVar3,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x10),param_5
                           ,lVar2 + 0x38,0);
      }
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if ((*(long *)(lVar2 + 0x38) != 0) &&
         (lVar3 = *(long *)(*(long *)(lVar2 + 0x38) + 0x20), lVar3 != 0)) {
        lVar10 = *(long *)(lVar2 + 0x10);
        uVar1 = FUN_05796eb0(lVar3,0,DAT_091add20);
        if (lVar10 != 0) {
          uVar5 = AnhPD_FoodOrder_FCustomerLine__GetOrderTarget(lVar10,uVar1,0);
          *(undefined8 *)(lVar2 + 0x20) = uVar5;
          thunk_FUN_03f5d7b8();
          if (*(long *)(param_1 + 0x98) != 0) {
            FUN_053ec72c(*(long *)(param_1 + 0x98),*puVar12,DAT_091a8600);
            if (*plVar8 != 0) {
              uVar7 = *puVar11;
              uVar5 = UnityEngine_Object__GetName(*plVar8,0);
              uVar5 = System_String__Concat(DAT_09222360,uVar5,0);
              if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09189140);
              }
              AnhPD_FoodOrder_PieceLedger__Step(uVar7,uVar5,0);
              lVar3 = *(long *)(lVar2 + 0x48);
              uVar9 = *(undefined8 *)(lVar2 + 0x20);
              *(undefined1 *)(lVar2 + 0x28) = 0;
              uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
              System_Action___ctor(uVar5,lVar2,DAT_091efa38,0);
              uVar7 = thunk_FUN_03f9944c(DAT_09177ab8);
              FUN_053007d8(uVar7,lVar2,DAT_091efa40,0);
              uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
              System_Action___ctor(uVar6,lVar2,DAT_091efa48,0);
              if (lVar3 != 0) {
                AnhPD_FoodOrder_ServePlate__ServeTo(lVar3,uVar9,uVar5,0,uVar7,uVar6);
                return 1;
              }
            }
          }
        }
      }
    }
  }
LAB_040c852c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

