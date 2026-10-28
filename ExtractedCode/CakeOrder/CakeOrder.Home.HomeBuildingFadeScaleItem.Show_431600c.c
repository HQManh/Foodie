// rea decompile_all
// name: CakeOrder.Home.HomeBuildingFadeScaleItem$$Show
// address: 0x431600c
// body: available
// range: 0x431600c-0x4316123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x431611c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4316120 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeBuildingFadeScaleItem__Show(float param_1,long param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((DAT_095175f2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095175f2 = 1;
  }
  *(undefined1 *)(param_2 + 0x34) = 1;
  lVar1 = UnityEngine_Component__get_gameObject(param_2,0);
  if (lVar1 != 0) {
    UnityEngine_GameObject__SetActive(lVar1,1,0);
    lVar1 = *(long *)(param_2 + 0x28);
    if ((lVar1 != 0) && (0 < (int)*(ulong *)(lVar1 + 0x18))) {
      uVar4 = 0;
      uVar2 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
      if ((param_3 & 1) == 0) {
        param_1 = 0.0;
      }
      do {
        if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar3 = *(long *)(lVar1 + 0x20 + uVar4 * 8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Equality(lVar3,0,0);
        if ((uVar2 & 1) == 0) {
          if (lVar3 == 0) goto LAB_04316120;
          CakeOrder_Home_HomeBuildingFadeScalePart__Show(param_1,lVar3,param_3 & 1);
          if ((param_3 & 1) != 0) {
            param_1 = param_1 + *(float *)(param_2 + 0x30);
          }
        }
        uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar1 + 0x18));
    }
    return;
  }
LAB_04316120:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

