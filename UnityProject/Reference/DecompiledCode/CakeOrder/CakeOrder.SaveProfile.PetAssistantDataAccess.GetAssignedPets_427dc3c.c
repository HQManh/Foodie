// rea decompile_all
// name: CakeOrder.SaveProfile.PetAssistantDataAccess$$GetAssignedPets
// address: 0x427dc3c
// body: available
// range: 0x427dc3c-0x427de3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x427de30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427de34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427de38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_SaveProfile_PetAssistantDataAccess__GetAssignedPets(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_78;
  undefined8 *puStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  
  if ((DAT_095170b7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a04f8);
    FUN_03f5c2a4(&DAT_091a6a20);
    FUN_03f5c2a4(&DAT_091a6a28);
    FUN_03f5c2a4(&DAT_091a6a30);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091b9d80);
    FUN_03f5c2a4(&DAT_091bea58);
    DAT_095170b7 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar3,DAT_091b0558);
  if ((((*(long *)(param_1 + 0x20) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x48), lVar6 == 0)) ||
      (lVar6 = *(long *)(lVar6 + 0x30), lVar6 == 0)) ||
     (lVar6 = FUN_06fd8278(lVar6,DAT_091a04f8), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_06544014(&local_78,lVar6,DAT_091bea58);
  local_50 = local_68;
  uStack_58 = puStack_70;
  local_60 = local_78;
  local_78 = 0;
  puStack_70 = &local_60;
  while( true ) {
    do {
      uVar4 = FUN_072759a8(&local_60,DAT_091a6a28);
      lVar6 = local_50;
      if ((uVar4 & 1) == 0) {
        FUN_072759a4(&local_60,DAT_091a6a20);
        return lVar3;
      }
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    } while ((*(char *)(local_50 + 0x18) == '\0') ||
            (uVar4 = System_String__op_Equality(*(undefined8 *)(local_50 + 0x28),param_2,0),
            lVar2 = DAT_091b0570, (uVar4 & 1) == 0));
    if (lVar3 == 0) break;
    lVar7 = *(long *)(lVar3 + 0x10);
    uVar5 = *(undefined8 *)(lVar6 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar3,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

