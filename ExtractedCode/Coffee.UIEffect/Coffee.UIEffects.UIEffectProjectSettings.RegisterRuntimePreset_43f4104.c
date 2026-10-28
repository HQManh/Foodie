// rea decompile_all
// name: Coffee.UIEffects.UIEffectProjectSettings$$RegisterRuntimePreset
// address: 0x43f4104
// body: available
// range: 0x43f4104-0x43f4243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f421c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43f423c to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43f4240 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIEffectProjectSettings__RegisterRuntimePreset(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((DAT_09517df5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1328);
    FUN_03f5c2a4(&DAT_091b1330);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091b8780);
    DAT_09517df5 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_1,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = FUN_05d86d6c(DAT_091b8780);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
    uVar2 = FUN_057e1004(*(long *)(lVar3 + 0x20),param_1,DAT_091b1330);
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar4 = FUN_05d86d6c(DAT_091b8780);
    lVar3 = DAT_091b1328;
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
      lVar6 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (*(uint *)(lVar6 + 0x18) <= uVar1) {
          FUN_057e0c68(lVar4,param_1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          return;
        }
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *puVar5 = param_1;
        thunk_FUN_03f5d7b8(puVar5,param_1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

