// rea decompile_all
// name: Mono.Security.Protocol.Ntlm.ChallengeResponse2$$Compute_NTLMv2
// address: 0x7402030
// body: available
// range: 0x7402030-0x7402467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7402460 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7402464 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Mono_Security_Protocol_Ntlm_ChallengeResponse2__Compute_NTLMv2
          (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_50;
  long local_48;
  
  if ((DAT_09520e91 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182470);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09184f70);
    DAT_09520e91 = 1;
  }
  local_50 = 0;
  if (*(int *)(DAT_09182470 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = Mono_Security_Protocol_Ntlm_ChallengeResponse2__Compute_NTLM_Password(param_3);
  plVar2 = (long *)System_Text_Encoding__get_Unicode(0);
  if ((param_2 != 0) && (uVar3 = System_String__ToUpperInvariant(param_2,0), plVar2 != (long *)0x0))
  {
    lVar4 = (**(code **)(*plVar2 + 600))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x260));
    plVar2 = (long *)System_Text_Encoding__get_Unicode(0);
    if (plVar2 != (long *)0x0) {
      lVar5 = (**(code **)(*plVar2 + 600))(plVar2,param_4,*(undefined8 *)(*plVar2 + 0x260));
      if ((lVar4 != 0) && (lVar5 != 0)) {
        uVar3 = FUN_03f5c394(DAT_0917fc88,*(int *)(lVar5 + 0x18) + *(int *)(lVar4 + 0x18));
        System_Array__CopyTo(lVar4,uVar3,0,0);
        System_Array__Copy(lVar5,0,uVar3,*(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar5 + 0x18)
                           ,0);
        lVar4 = thunk_FUN_03f9944c(DAT_09184f70);
        System_Security_Cryptography_HMACMD5___ctor(lVar4,lVar1,0);
        if ((lVar4 != 0) &&
           (lVar5 = System_Security_Cryptography_HashAlgorithm__ComputeHash(lVar4,uVar3,0),
           lVar1 != 0)) {
          System_Array__Clear(lVar1,0,*(undefined4 *)(lVar1 + 0x18),0);
          System_Security_Cryptography_HashAlgorithm__Clear(lVar4,0);
          lVar1 = thunk_FUN_03f9944c(DAT_09184f70);
          System_Security_Cryptography_HMACMD5___ctor(lVar1,lVar5,0);
          if (*(int *)(DAT_09183548 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_50 = System_DateTime__get_Now(0);
          lVar4 = System_DateTime__get_Ticks(&local_50,0);
          lVar6 = FUN_03f5c394(DAT_0917fc88,8);
          plVar2 = (long *)System_Security_Cryptography_RandomNumberGenerator__Create(0);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x198))(plVar2,lVar6,*(undefined8 *)(*plVar2 + 0x1a0));
            if (((param_1 != 0) &&
                (lVar7 = Mono_Security_Protocol_Ntlm_Type2Message__get_TargetInfo(param_1),
                lVar7 != 0)) &&
               (lVar7 = FUN_03f5c394(DAT_0917fc88,*(int *)(lVar7 + 0x18) + 0x1c), lVar7 != 0)) {
              if ((*(int *)(lVar7 + 0x18) == 0) ||
                 (*(undefined1 *)(lVar7 + 0x20) = 1, *(int *)(lVar7 + 0x18) == 1)) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              *(undefined1 *)(lVar7 + 0x21) = 1;
              local_48 = lVar4 + -0x701ce1722770000;
              uVar3 = Mono_Security_BitConverterLE__GetULongBytes(&local_48);
              System_Buffer__BlockCopy(uVar3,0,lVar7,8,8,0);
              System_Buffer__BlockCopy(lVar6,0,lVar7,0x10,8,0);
              uVar3 = Mono_Security_Protocol_Ntlm_Type2Message__get_TargetInfo(param_1);
              lVar4 = Mono_Security_Protocol_Ntlm_Type2Message__get_TargetInfo(param_1);
              if (lVar4 != 0) {
                System_Buffer__BlockCopy(uVar3,0,lVar7,0x1c,*(undefined4 *)(lVar4 + 0x18),0);
                lVar4 = Mono_Security_Protocol_Ntlm_Type2Message__get_Nonce(param_1);
                if (lVar4 != 0) {
                  lVar8 = FUN_03f5c394(DAT_0917fc88,*(int *)(lVar7 + 0x18) + *(int *)(lVar4 + 0x18))
                  ;
                  System_Array__CopyTo(lVar4,lVar8,0,0);
                  System_Array__CopyTo(lVar7,lVar8,*(undefined4 *)(lVar4 + 0x18),0);
                  if ((lVar1 != 0) &&
                     (lVar4 = System_Security_Cryptography_HashAlgorithm__ComputeHash(lVar1,lVar8,0)
                     , lVar4 != 0)) {
                    uVar3 = FUN_03f5c394(DAT_0917fc88,
                                         *(int *)(lVar4 + 0x18) + *(int *)(lVar7 + 0x18));
                    System_Array__CopyTo(lVar4,uVar3,0,0);
                    System_Array__CopyTo(lVar7,uVar3,*(undefined4 *)(lVar4 + 0x18),0);
                    if (lVar5 != 0) {
                      System_Array__Clear(lVar5,0,*(undefined4 *)(lVar5 + 0x18),0);
                      System_Security_Cryptography_HashAlgorithm__Clear(lVar1,0);
                      if (lVar6 != 0) {
                        System_Array__Clear(lVar6,0,*(undefined4 *)(lVar6 + 0x18),0);
                        System_Array__Clear(lVar7,0,*(undefined4 *)(lVar7 + 0x18),0);
                        if (lVar8 != 0) {
                          System_Array__Clear(lVar8,0,*(undefined4 *)(lVar8 + 0x18),0);
                          System_Array__Clear(lVar4,0,*(undefined4 *)(lVar4 + 0x18),0);
                          return uVar3;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

