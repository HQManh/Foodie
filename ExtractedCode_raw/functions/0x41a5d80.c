// rea decompile_all
// name: Datpt.Cook_Order.KnifeBase$$StopCutAnimation
// address: 0x41a5d80
// body: available
// range: 0x41a5d80-0x41a5edf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a5ed8 to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41a5edc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_KnifeBase__StopCutAnimation(long param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x20),1,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x28),0,0);
      if (*(long *)(param_1 + 0x48) != 0) {
        lVar4 = *(long *)(param_1 + 0x40);
        uVar1 = UnityEngine_Object__GetName(*(long *)(param_1 + 0x48),0);
        if (lVar4 != 0) {
          UnityEngine_Animation__StopNamed(lVar4,uVar1,0);
          lVar4 = *(long *)(param_1 + 0x38);
          if (DAT_09515ce6 == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515ce6 = '\x01';
          }
          if (lVar4 != 0) {
            puVar2 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
            UnityEngine_Transform__set_localPosition(*puVar2,puVar2[1],puVar2[2],lVar4,0);
            lVar4 = *(long *)(param_1 + 0x38);
            if (DAT_09515ed5 == '\0') {
              FUN_03f5c2a4(&DAT_091898c0);
              DAT_09515ed5 = '\x01';
            }
            if (lVar4 != 0) {
              puVar2 = *(undefined4 **)(DAT_091898c0 + 0xb8);
              UnityEngine_Transform__set_localRotation
                        (*puVar2,puVar2[1],puVar2[2],puVar2[3],lVar4,0);
              lVar4 = *(long *)(param_1 + 0x38);
              if (DAT_09515cf3 == '\0') {
                FUN_03f5c2a4(&DAT_0918cbd0);
                DAT_09515cf3 = '\x01';
              }
              if (lVar4 != 0) {
                lVar3 = *(long *)(DAT_0918cbd0 + 0xb8);
                UnityEngine_Transform__set_localScale
                          (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                           *(undefined4 *)(lVar3 + 0x14),lVar4,0);
                if (*(long *)(param_1 + 0x30) != 0) {
                  UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x30),0,0);
                  return;
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

