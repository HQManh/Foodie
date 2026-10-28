// rea decompile_all
// name: CakeOrder.InGame.CustomerScheduleBuilder$$CollectRecipePieces
// address: 0x428c044
// body: available
// range: 0x428c044-0x428c3b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x428c3b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428c3b4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_CustomerScheduleBuilder__CollectRecipePieces
               (long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_34;
  
  if ((DAT_09517176 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a3b30);
    FUN_03f5c2a4(&DAT_091a3b38);
    FUN_03f5c2a4(&DAT_091a3b40);
    FUN_03f5c2a4(&DAT_09186c00);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091aecc0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09204b10);
    FUN_03f5c2a4(&DAT_09213c60);
    FUN_03f5c2a4(&DAT_09213c48);
    FUN_03f5c2a4(&DAT_091f6cd8);
    FUN_03f5c2a4(&DAT_091f7760);
    DAT_09517176 = 1;
  }
  local_34 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    plVar7 = *(long **)(param_2 + 0x20);
    if ((plVar7 == (long *)0x0) || (*plVar7 != DAT_09186c00)) {
      local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_2 + 0x14));
      uVar2 = FUN_03f5c42c(DAT_09535420,&local_68);
      uVar2 = System_String__Format(DAT_09213c60,uVar2,0);
      uVar2 = System_String__Concat(uVar2,DAT_09204b10,0);
    }
    else {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_0428c3b0;
      uVar3 = CakeOrder_MapIngredientLookupTable__TryGetServableRecipePieceIndex
                        (*(long *)(param_1 + 0x10),plVar7,&local_34,0);
      lVar4 = DAT_091adc88;
      if ((uVar3 & 1) != 0) {
        if (param_3 == 0) goto LAB_0428c3b0;
        lVar5 = *(long *)(param_3 + 0x10);
        *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_0428c3b0;
        uVar1 = *(uint *)(param_3 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(param_3 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = local_34;
        }
        else {
          FUN_057971a8(param_3,local_34,
                       *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_0428c1cc;
      }
      lVar4 = FUN_03f5c394(DAT_091805f8,5);
      if (lVar4 == 0) goto LAB_0428c3b0;
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_0428c3b4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar4 + 0x20) = DAT_09213c48;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x20));
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto LAB_0428c3b4;
      *(long *)(lVar4 + 0x28) = plVar7[3];
      thunk_FUN_03f5d7b8((long *)(lVar4 + 0x28));
      if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_0428c3b4;
      *(undefined8 *)(lVar4 + 0x30) = DAT_091f7760;
      thunk_FUN_03f5d7b8();
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_0428c3b0;
      uVar2 = UnityEngine_Object__GetName(*(long *)(param_1 + 0x10),0);
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) == 0) goto LAB_0428c3b4;
      *(undefined8 *)(lVar4 + 0x38) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x38),uVar2);
      if (*(uint *)(lVar4 + 0x18) < 5) goto LAB_0428c3b4;
      *(undefined8 *)(lVar4 + 0x40) = DAT_091f6cd8;
      thunk_FUN_03f5d7b8();
      uVar2 = System_String__Concat(lVar4,0);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__LogWarning(uVar2,uVar6,0);
  }
LAB_0428c1cc:
  if (*(long *)(param_2 + 0x28) != 0) {
    FUN_057e185c(&local_58,*(long *)(param_2 + 0x28),DAT_091aecc0);
    local_68 = 0;
    puStack_60 = &local_58;
    while (uVar3 = FUN_071bd28c(&local_58,DAT_091a3b38), (uVar3 & 1) != 0) {
      CakeOrder_InGame_CustomerScheduleBuilder__CollectRecipePieces(param_1,local_48,param_3);
    }
    FUN_071bd288(&local_58,DAT_091a3b30);
    return;
  }
LAB_0428c3b0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

