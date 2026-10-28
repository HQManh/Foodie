// rea decompile_all
// name: AnhPD.FoodOrder.SeafoodOrderStrategy$$AvailableSupply
// address: 0x4130840
// body: available
// range: 0x4130840-0x4130bd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4130bc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4130bcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4130bd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4130bd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_SeafoodOrderStrategy__AvailableSupply(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_120;
  undefined8 *puStack_118;
  long *local_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 local_f8;
  undefined8 *puStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  
  if ((DAT_09516335 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f978);
    FUN_03f5c2a4(&DAT_09176b28);
    FUN_03f5c2a4(&DAT_091a2a50);
    FUN_03f5c2a4(&DAT_091a27c8);
    FUN_03f5c2a4(&DAT_091a2a58);
    FUN_03f5c2a4(&DAT_091a27d0);
    FUN_03f5c2a4(&DAT_091a27d8);
    FUN_03f5c2a4(&DAT_091a2a60);
    FUN_03f5c2a4(&DAT_09184748);
    FUN_03f5c2a4(&DAT_091ac6b0);
    FUN_03f5c2a4(&DAT_091ac068);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918a7b8);
    DAT_09516335 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (long *)0x0;
  local_90 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  plStack_a0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uVar2 = thunk_FUN_03f9944c(DAT_09176b28);
  FUN_06fc96ac(uVar2,DAT_0919f978);
  if ((param_1 != 0) &&
     (lVar3 = AnhPD_FoodOrder_MessyController__GetDragItems(param_1,0), lVar3 != 0)) {
    FUN_057e185c(&local_120,lVar3,DAT_091ac6b0);
    local_70 = local_110;
    puStack_f0 = &local_80;
    uStack_78 = puStack_118;
    local_80 = local_120;
    local_f8 = 0;
    while (uVar4 = FUN_071bd28c(&local_80,DAT_091a2a58), plVar1 = local_70, (uVar4 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(plVar1,0);
      if ((uVar4 & 1) != 0) {
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = UnityEngine_Component__get_gameObject(plVar1,0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar4 = UnityEngine_GameObject__get_activeInHierarchy(lVar3,0);
        if ((((uVar4 & 1) != 0) && (*(char *)((long)plVar1 + 0xe9) == '\0')) &&
           (*(char *)((long)plVar1 + 0xea) == '\0')) {
          if (*plVar1 == DAT_09184748) {
            (**(code **)(DAT_09184748 + 0x218))
                      (&local_120,plVar1,*(undefined8 *)(DAT_09184748 + 0x220));
            uStack_c8 = puStack_118;
            local_d0 = local_120;
            local_c0 = local_110;
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_120,&local_d0,0);
            local_90 = local_100;
            uStack_a8 = puStack_118;
            local_b0 = local_120;
            uStack_98 = uStack_108;
            plStack_a0 = local_110;
            while (uVar5 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_b0,0),
                  uVar4 = local_90, (uVar5 & 1) != 0) {
              if (*(int *)(DAT_0918a7b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar6 = CakeOrder_InGame_Seafood_SeafoodPieceTable__PreparedId(uVar4 & 0xffffffff,0);
              AnhPD_FoodOrder_SeafoodOrderStrategy__AddCount(uVar2,uVar6,uVar4 >> 0x20);
            }
          }
          else {
            AnhPD_FoodOrder_SeafoodOrderStrategy__AddCount(uVar2,plVar1[0xf],1);
          }
        }
      }
    }
    FUN_071bd288(&local_80,DAT_091a2a50);
    lVar3 = AnhPD_FoodOrder_MessyController__GetCookingStations(param_1,0);
    if (lVar3 != 0) {
      FUN_057e185c(&local_e8,lVar3,DAT_091ac068);
      local_120 = 0;
      puStack_118 = &local_e8;
      while( true ) {
        do {
          uVar4 = FUN_071bd28c(&local_e8,DAT_091a27d0);
          lVar3 = local_d8;
          if ((uVar4 & 1) == 0) {
            FUN_071bd288(&local_e8,DAT_091a27c8);
            return uVar2;
          }
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
        } while ((uVar4 & 1) == 0);
        if (lVar3 == 0) break;
        lVar3 = AnhPD_FoodOrder_CookingStation__get_WorkingResultId(lVar3,0);
        if (lVar3 != 0) {
          AnhPD_FoodOrder_SeafoodOrderStrategy__AddCount(uVar2,lVar3,1);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

