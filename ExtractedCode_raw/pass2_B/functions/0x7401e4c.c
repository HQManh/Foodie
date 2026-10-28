// rea decompile_all
// name: Mono.Security.Protocol.Ntlm.ChallengeResponse2$$Compute_NTLMv2_Session
// address: 0x7401e4c
// body: available
// range: 0x7401e4c-0x740202f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7402028 to 0x75d9dec System.Array$$Clear (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x740202c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Protocol_Ntlm_ChallengeResponse2__Compute_NTLMv2_Session
               (undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_09520e90 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182470);
    DAT_09520e90 = 1;
  }
  lVar1 = FUN_03f5c394(DAT_0917fc88,8);
  plVar2 = (long *)System_Security_Cryptography_RandomNumberGenerator__Create(0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x198))(plVar2,lVar1,*(undefined8 *)(*plVar2 + 0x1a0));
    if (param_2 != 0) {
      lVar3 = FUN_03f5c394(DAT_0917fc88,*(int *)(param_2 + 0x18) + 8);
      System_Array__CopyTo(param_2,lVar3,0,0);
      if (lVar1 != 0) {
        System_Array__CopyTo(lVar1,lVar3,*(undefined4 *)(param_2 + 0x18),0);
        uVar4 = FUN_03f5c394(DAT_0917fc88,0x18);
        *param_3 = uVar4;
        thunk_FUN_03f5d7b8(param_3,uVar4);
        System_Array__CopyTo(lVar1,*param_3,0,0);
        lVar5 = System_Security_Cryptography_MD5__Create(0);
        if (lVar5 != 0) {
          lVar5 = System_Security_Cryptography_HashAlgorithm__ComputeHash(lVar5,lVar3,0);
          lVar6 = FUN_03f5c394(DAT_0917fc88,8);
          System_Array__Copy(lVar5,lVar6,8,0);
          if (*(int *)(DAT_09182470 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = Mono_Security_Protocol_Ntlm_ChallengeResponse2__Compute_NTLM(param_1,lVar6);
          *param_4 = uVar4;
          thunk_FUN_03f5d7b8(param_4,uVar4);
          System_Array__Clear(lVar1,0,*(undefined4 *)(lVar1 + 0x18),0);
          if (((lVar3 != 0) &&
              (System_Array__Clear(lVar3,0,*(undefined4 *)(lVar3 + 0x18),0), lVar6 != 0)) &&
             (System_Array__Clear(lVar6,0,*(undefined4 *)(lVar6 + 0x18),0), lVar5 != 0)) {
            System_Array__Clear(lVar5,0,*(undefined4 *)(lVar5 + 0x18),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

