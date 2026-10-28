// rea decompile_all
// name: Mono.Security.Protocol.Ntlm.ChallengeResponse$$PrepareDESKey
// address: 0x7401278
// body: available
// range: 0x7401278-0x740146f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7401468 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740146c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Protocol_Ntlm_ChallengeResponse__PrepareDESKey
               (undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  
  if ((DAT_09520e8a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09520e8a = 1;
  }
  lVar4 = FUN_03f5c394(DAT_0917fc88,8);
  if (param_2 != 0) {
    if (param_3 < *(uint *)(param_2 + 0x18)) {
      if (lVar4 == 0) goto LAB_0740146c;
      uVar3 = *(uint *)(lVar4 + 0x18);
      if (uVar3 != 0) {
        puVar5 = (undefined1 *)(param_2 + (int)param_3 + 0x20);
        *(undefined1 *)(lVar4 + 0x20) = *puVar5;
        if (((param_3 < *(uint *)(param_2 + 0x18)) &&
            (uVar1 = param_3 + 1, uVar1 < *(uint *)(param_2 + 0x18))) && (uVar3 != 1)) {
          *(char *)(lVar4 + 0x21) =
               (char)(CONCAT11(*puVar5,*(undefined1 *)(param_2 + (int)uVar1 + 0x20)) >> 1);
          if (((uVar1 < *(uint *)(param_2 + 0x18)) &&
              (uVar2 = param_3 + 2, uVar2 < *(uint *)(param_2 + 0x18))) && (2 < uVar3)) {
            *(char *)(lVar4 + 0x22) =
                 (char)(CONCAT11(*(undefined1 *)(param_2 + (int)uVar1 + 0x20),
                                 *(undefined1 *)(param_2 + (int)uVar2 + 0x20)) >> 2);
            if (((uVar2 < *(uint *)(param_2 + 0x18)) &&
                (uVar1 = param_3 + 3, uVar1 < *(uint *)(param_2 + 0x18))) && (uVar3 != 3)) {
              *(char *)(lVar4 + 0x23) =
                   (char)(CONCAT11(*(undefined1 *)(param_2 + (int)uVar2 + 0x20),
                                   *(undefined1 *)(param_2 + (int)uVar1 + 0x20)) >> 3);
              if (((uVar1 < *(uint *)(param_2 + 0x18)) &&
                  (uVar2 = param_3 + 4, uVar2 < *(uint *)(param_2 + 0x18))) && (4 < uVar3)) {
                *(char *)(lVar4 + 0x24) =
                     (char)(CONCAT11(*(undefined1 *)(param_2 + (int)uVar1 + 0x20),
                                     *(undefined1 *)(param_2 + (int)uVar2 + 0x20)) >> 4);
                if (((uVar2 < *(uint *)(param_2 + 0x18)) &&
                    (uVar1 = param_3 + 5, uVar1 < *(uint *)(param_2 + 0x18))) && (uVar3 != 5)) {
                  *(char *)(lVar4 + 0x25) =
                       (char)(CONCAT11(*(undefined1 *)(param_2 + (int)uVar2 + 0x20),
                                       *(undefined1 *)(param_2 + (int)uVar1 + 0x20)) >> 5);
                  if (((uVar1 < *(uint *)(param_2 + 0x18)) &&
                      (param_3 = param_3 + 6, param_3 < *(uint *)(param_2 + 0x18))) && (6 < uVar3))
                  {
                    *(char *)(lVar4 + 0x26) =
                         (char)(CONCAT11(*(undefined1 *)(param_2 + (int)uVar1 + 0x20),
                                         *(undefined1 *)(param_2 + (int)param_3 + 0x20)) >> 6);
                    if ((param_3 < *(uint *)(param_2 + 0x18)) && (uVar3 != 7)) {
                      *(char *)(lVar4 + 0x27) = *(char *)(param_2 + (int)param_3 + 0x20) << 1;
                      return;
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
    FUN_03f5c558();
  }
LAB_0740146c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

