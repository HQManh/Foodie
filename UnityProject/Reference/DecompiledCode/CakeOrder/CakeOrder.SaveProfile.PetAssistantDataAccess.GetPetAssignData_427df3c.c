// rea decompile_all
// name: CakeOrder.SaveProfile.PetAssistantDataAccess$$GetPetAssignData
// address: 0x427df3c
// body: available
// range: 0x427df3c-0x427e057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x427e054 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_SaveProfile_PetAssistantDataAccess__GetPetAssignData(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long local_28;
  
  if ((DAT_095170b9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a04f0);
    FUN_03f5c2a4(&DAT_09189058);
    FUN_03f5c2a4(&DAT_091b9d80);
    DAT_095170b9 = 1;
  }
  local_28 = 0;
  if (((*(long *)(param_1 + 0x20) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x48), lVar3 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0x30), lVar3 != 0)) {
    uVar2 = FUN_06fd9fbc(lVar3,param_2,&local_28,DAT_091a04f0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (local_28 != 0) {
      if (*(char *)(local_28 + 0x18) == '\0') {
        return 0;
      }
      lVar3 = thunk_FUN_03f9944c(DAT_09189058);
      System_Object___ctor(lVar3,0);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x10) = param_2;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x10),param_2);
        if (local_28 != 0) {
          *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(local_28 + 0x28);
          thunk_FUN_03f5d7b8();
          if (local_28 != 0) {
            uVar1 = *(undefined4 *)(local_28 + 0x30);
            *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(local_28 + 0x38);
            *(undefined4 *)(lVar3 + 0x20) = uVar1;
            thunk_FUN_03f5d7b8();
            return lVar3;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

