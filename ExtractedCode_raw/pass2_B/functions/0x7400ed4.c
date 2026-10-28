// rea decompile_all
// name: Mono.Security.Protocol.Ntlm.ChallengeResponse$$GetResponse
// address: 0x7400ed4
// body: available
// range: 0x7400ed4-0x74011af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74011ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Mono_Security_Protocol_Ntlm_ChallengeResponse__GetResponse(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_09520e89 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09183178);
    FUN_03f5c2a4(&DAT_09185920);
    DAT_09520e89 = 1;
  }
  uVar1 = FUN_03f5c394(DAT_0917fc88,0x18);
  if (*(int *)(DAT_09183178 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09183178);
  }
  plVar2 = (long *)System_Security_Cryptography_DES__Create(0);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x248))(plVar2,2,*(undefined8 *)(*plVar2 + 0x250));
    uVar3 = Mono_Security_Protocol_Ntlm_ChallengeResponse__PrepareDESKey(uVar3,param_2,0);
    (**(code **)(*plVar2 + 0x1f8))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x200));
    plVar4 = (long *)(**(code **)(*plVar2 + 0x278))(plVar2,*(undefined8 *)(*plVar2 + 0x280));
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09185920) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_07401014;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185920,3);
LAB_07401014:
      uVar3 = (*(code *)*puVar5)(plVar4,uVar3,0,8,uVar1,0,puVar5[1]);
      uVar3 = Mono_Security_Protocol_Ntlm_ChallengeResponse__PrepareDESKey(uVar3,param_2,7);
      (**(code **)(*plVar2 + 0x1f8))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x200));
      plVar4 = (long *)(**(code **)(*plVar2 + 0x278))(plVar2,*(undefined8 *)(*plVar2 + 0x280));
      if (plVar4 != (long *)0x0) {
        lVar6 = *plVar4;
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09185920) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
              goto LAB_074010c4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185920,3);
LAB_074010c4:
        uVar3 = (*(code *)*puVar5)(plVar4,uVar3,0,8,uVar1,8,puVar5[1]);
        uVar3 = Mono_Security_Protocol_Ntlm_ChallengeResponse__PrepareDESKey(uVar3,param_2,0xe);
        (**(code **)(*plVar2 + 0x1f8))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x200));
        plVar2 = (long *)(**(code **)(*plVar2 + 0x278))(plVar2,*(undefined8 *)(*plVar2 + 0x280));
        if (plVar2 != (long *)0x0) {
          lVar6 = *plVar2;
          uVar3 = *(undefined8 *)(param_1 + 0x18);
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_09185920) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
                goto LAB_07401174;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185920,3);
LAB_07401174:
          (*(code *)*puVar5)(plVar2,uVar3,0,8,uVar1,0x10,puVar5[1]);
          return uVar1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

