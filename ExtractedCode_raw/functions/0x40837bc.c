// rea decompile_all
// name: CakeOrder.InGame.Seafood.SeafoodPieceTable$$CanOpenPlate
// address: 0x40837bc
// body: available
// range: 0x40837bc-0x408390b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4083904 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4083908 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CakeOrder_InGame_Seafood_SeafoodPieceTable__CanOpenPlate
               (int param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  int local_34;
  
  if ((DAT_09515c85 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a7b8);
    DAT_09515c85 = 1;
  }
  uStack_48 = param_3[1];
  local_50 = *param_3;
  local_40 = param_3[2];
  local_34 = 0;
  if (*(int *)(DAT_0918a7b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uStack_68 = uStack_48;
  local_70 = local_50;
  local_60 = local_40;
  uVar3 = CakeOrder_InGame_Seafood_SeafoodPieceTable__IsValid(param_1,&local_70,0);
  bVar2 = false;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(DAT_0918a7b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = CakeOrder_InGame_Seafood_SeafoodPieceTable__BaseId(param_1);
    uVar3 = System_String__op_Equality(param_2,uVar4,0);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(DAT_0918a7b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = CakeOrder_InGame_Seafood_SeafoodPieceTable__TryGetPiece(param_2,&local_34);
      iVar1 = local_34;
      if ((uVar3 & 1) == 0) {
        bVar2 = false;
      }
      else {
        if (*(int *)(DAT_0918a7b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar5 = *(long *)(*(long *)(DAT_0918a7b8 + 0xb8) + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar5 + 0x18) <= param_1 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        bVar2 = iVar1 == *(int *)(lVar5 + (long)(int)(param_1 - 1U) * 4 + 0x20);
      }
    }
    else {
      bVar2 = true;
    }
  }
  return bVar2;
}

