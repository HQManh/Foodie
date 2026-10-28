// rea decompile_all
// name: Mono.Security.Protocol.Ntlm.ChallengeResponse$$set_Password
// address: 0x740070c
// body: available
// range: 0x740070c-0x7400b13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7400ac4 to 0x746d0d8 System.Security.Cryptography.SymmetricAlgorithm$$Clear (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7400ac8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7400b10 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Protocol_Ntlm_ChallengeResponse__set_Password(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  
  if ((DAT_09520e86 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182468);
    FUN_03f5c2a4(&DAT_09183178);
    FUN_03f5c2a4(&DAT_09185920);
    DAT_09520e86 = 1;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar2 = thunk_FUN_03f9944c();
    uVar9 = thunk_FUN_03fc39d4(&DAT_092240d8);
    System_ObjectDisposedException___ctor(uVar2,uVar9,0);
    uVar9 = thunk_FUN_03fc39d4(&DAT_091c49e0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar9);
  }
  if (*(int *)(DAT_09183178 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar1 = (long *)System_Security_Cryptography_DES__Create(0);
  if (plVar1 == (long *)0x0) goto LAB_07400ac8;
  (**(code **)(*plVar1 + 0x248))(plVar1,2,*(undefined8 *)(*plVar1 + 0x250));
  if ((param_2 == 0) || (*(int *)(param_2 + 0x10) < 1)) {
    if (*(int *)(DAT_09182468 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Buffer__BlockCopy
              (*(undefined8 *)(*(long *)(DAT_09182468 + 0xb8) + 8),0,*(undefined8 *)(param_1 + 0x20)
               ,0,8,0);
    if (param_2 == 0) goto LAB_07400998;
LAB_074008e0:
    if (*(int *)(param_2 + 0x10) < 8) goto LAB_07400998;
    uVar2 = Mono_Security_Protocol_Ntlm_ChallengeResponse__PasswordToKey(param_1,param_2,7);
    (**(code **)(*plVar1 + 0x1f8))(plVar1,uVar2,*(undefined8 *)(*plVar1 + 0x200));
    plVar3 = (long *)(**(code **)(*plVar1 + 0x278))(plVar1,*(undefined8 *)(*plVar1 + 0x280));
    if (*(int *)(DAT_09182468 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182468);
    }
    if (plVar3 == (long *)0x0) goto LAB_07400ac8;
    lVar7 = *plVar3;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    uVar9 = **(undefined8 **)(DAT_09182468 + 0xb8);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185920) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_074009e0;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185920,3);
LAB_074009e0:
    (*(code *)*puVar4)(plVar3,uVar9,0,8,uVar2,8,puVar4[1]);
  }
  else {
    uVar2 = Mono_Security_Protocol_Ntlm_ChallengeResponse__PasswordToKey(param_1,param_2,0);
    (**(code **)(*plVar1 + 0x1f8))(plVar1,uVar2,*(undefined8 *)(*plVar1 + 0x200));
    plVar3 = (long *)(**(code **)(*plVar1 + 0x278))(plVar1,*(undefined8 *)(*plVar1 + 0x280));
    if (*(int *)(DAT_09182468 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182468);
    }
    if (plVar3 == (long *)0x0) goto LAB_07400ac8;
    lVar7 = *plVar3;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    uVar9 = **(undefined8 **)(DAT_09182468 + 0xb8);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185920) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_074008bc;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185920,3);
LAB_074008bc:
    (*(code *)*puVar4)(plVar3,uVar9,0,8,uVar2,0,puVar4[1]);
    if (param_2 != 0) goto LAB_074008e0;
LAB_07400998:
    if (*(int *)(DAT_09182468 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Buffer__BlockCopy
              (*(undefined8 *)(*(long *)(DAT_09182468 + 0xb8) + 8),0,*(undefined8 *)(param_1 + 0x20)
               ,8,8,0);
  }
  lVar7 = Mono_Security_Cryptography_MD4__Create(0);
  if (param_2 == 0) {
    lVar5 = FUN_03f5c394(DAT_0917fc88,0);
  }
  else {
    plVar3 = (long *)System_Text_Encoding__get_Unicode(0);
    if (plVar3 == (long *)0x0) goto LAB_07400ac8;
    lVar5 = (**(code **)(*plVar3 + 600))(plVar3,param_2,*(undefined8 *)(*plVar3 + 0x260));
  }
  if (lVar7 != 0) {
    lVar7 = System_Security_Cryptography_HashAlgorithm__ComputeHash(lVar7,lVar5,0);
    System_Buffer__BlockCopy(lVar7,0,*(undefined8 *)(param_1 + 0x28),0,0x10,0);
    if ((lVar5 != 0) && (System_Array__Clear(lVar5,0,*(undefined4 *)(lVar5 + 0x18),0), lVar7 != 0))
    {
      System_Array__Clear(lVar7,0,*(undefined4 *)(lVar7 + 0x18),0);
      System_Security_Cryptography_SymmetricAlgorithm__Clear(plVar1,0);
      return;
    }
  }
LAB_07400ac8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

