// rea decompile_all
// name: Mono.Security.Cryptography.KeyPairPersistence$$get_Filename
// address: 0x741ee54
// body: available
// range: 0x741ee54-0x741effb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x741eff8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Security_Cryptography_KeyPairPersistence__get_Filename(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_09520f7c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09187500);
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_092145c0);
    DAT_09520f7c = 1;
  }
  plVar5 = (long *)(param_1 + 0x20);
  if (*plVar5 == 0) {
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(long *)(param_1 + 0x10) != 0) {
      local_34 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10);
      uVar2 = FUN_03f5c42c(DAT_09535420,&local_34);
      uVar3 = Mono_Security_Cryptography_KeyPairPersistence__get_ContainerName(param_1);
      if (*(long *)(param_1 + 0x10) != 0) {
        local_38 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x28);
        uVar4 = FUN_03f5c42c(DAT_09535420,&local_38);
        uVar1 = System_String__Format(uVar1,DAT_092145c0,uVar2,uVar3,uVar4,0);
        *(undefined8 *)(param_1 + 0x20) = uVar1;
        thunk_FUN_03f5d7b8(plVar5,uVar1);
        if (*(long *)(param_1 + 0x10) != 0) {
          if ((*(uint *)(*(long *)(param_1 + 0x10) + 0x2c) & 1) == 0) {
            if (*(int *)(DAT_09187500 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar1 = Mono_Security_Cryptography_KeyPairPersistence__get_UserPath();
          }
          else {
            if (*(int *)(DAT_09187500 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar1 = Mono_Security_Cryptography_KeyPairPersistence__get_MachinePath();
          }
          lVar6 = *plVar5;
          if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188f20);
          }
          lVar6 = System_IO_Path__Combine(uVar1,lVar6,0);
          *plVar5 = lVar6;
          thunk_FUN_03f5d7b8(plVar5,lVar6);
          goto LAB_0741efe0;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_0741efe0:
  return *plVar5;
}

