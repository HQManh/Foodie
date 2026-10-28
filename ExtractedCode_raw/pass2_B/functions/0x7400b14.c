// rea decompile_all
// name: Mono.Security.Protocol.Ntlm.ChallengeResponse$$set_Challenge
// address: 0x7400b14
// body: available
// range: 0x7400b14-0x7400c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7400bb8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7400bc4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7400c40 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Protocol_Ntlm_ChallengeResponse__set_Challenge(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_09520e87 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09520e87 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_091fe788);
    System_ArgumentNullException___ctor(uVar3,uVar4,0);
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\0') {
      lVar1 = System_Array__Clone(param_2,0);
      uVar4 = DAT_0917fc88;
      if (lVar1 != 0) {
        lVar2 = thunk_FUN_03f99350(lVar1,DAT_0917fc88);
        uVar3 = DAT_0917fc88;
        if (lVar2 != 0) {
          *(long *)(param_1 + 0x18) = lVar2;
          lVar2 = thunk_FUN_03f99350(lVar1,uVar3);
          uVar4 = uVar3;
          if (lVar2 != 0) goto LAB_07400ba8;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar1,uVar4);
      }
      lVar2 = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
LAB_07400ba8:
      thunk_FUN_03f5d7b8(param_1 + 0x18,lVar2);
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_092240d8);
    System_ObjectDisposedException___ctor(uVar3,uVar4,0);
  }
  uVar4 = thunk_FUN_03fc39d4(&DAT_091c49d8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

