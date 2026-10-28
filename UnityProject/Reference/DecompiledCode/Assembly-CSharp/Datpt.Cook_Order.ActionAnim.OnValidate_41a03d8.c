// rea decompile_all
// name: Datpt.Cook_Order.ActionAnim$$OnValidate
// address: 0x41a03d8
// body: available
// range: 0x41a03d8-0x41a050f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a04f8 to 0x85c5b10 UnityEngine.Animation$$AddClip (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41a050c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_ActionAnim__OnValidate(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_0951683a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c52c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951683a = 1;
  }
  uVar1 = FUN_04a6a14c(param_1,DAT_091c52c8);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    uVar1 = UnityEngine_Object__GetName(*(long *)(param_1 + 0x48),0);
    if (lVar4 != 0) {
      uVar1 = UnityEngine_Animation__GetClip(lVar4,uVar1,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar4 = *(long *)(param_1 + 0x48);
      if (lVar4 != 0) {
        lVar3 = *(long *)(param_1 + 0x40);
        uVar1 = UnityEngine_Object__GetName(lVar4,0);
        if (lVar3 != 0) {
          UnityEngine_Animation__AddClip(lVar3,lVar4,uVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

