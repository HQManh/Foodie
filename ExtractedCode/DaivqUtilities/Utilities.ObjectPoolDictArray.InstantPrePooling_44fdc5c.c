// rea decompile_all
// name: Utilities.ObjectPoolDictArray$$InstantPrePooling
// address: 0x44fdc5c
// body: available
// range: 0x44fdc5c-0x44fdddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44fddd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_ObjectPoolDictArray__InstantPrePooling(long param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if ((DAT_09518487 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d220);
    FUN_03f5c2a4(&DAT_091acd50);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518487 = 1;
  }
  if (param_2 != 0) {
    uVar3 = UnityEngine_Object__GetInstanceID(param_2,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar4 = FUN_06ef046c(*(long *)(param_1 + 0x28),uVar3,DAT_0919d220);
      if (0 < param_3) {
        do {
          uVar5 = Utilities_ObjectPoolDictArray__get__Transform(param_1);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          lVar6 = FUN_04c35338(param_2,uVar5,DAT_091d4bc0);
          if ((lVar6 == 0) ||
             (UnityEngine_GameObject__SetActive(lVar6,0,0), lVar2 = DAT_091acd50, lVar4 == 0))
          goto LAB_044fddd8;
          lVar8 = *(long *)(lVar4 + 0x10);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_044fddd8;
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            plVar7 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *plVar7 = lVar6;
            thunk_FUN_03f5d7b8(plVar7,lVar6);
          }
          else {
            FUN_057e0c68(lVar4,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
      return;
    }
  }
LAB_044fddd8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

