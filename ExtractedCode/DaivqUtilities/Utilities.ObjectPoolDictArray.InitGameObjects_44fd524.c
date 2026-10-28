// rea decompile_all
// name: Utilities.ObjectPoolDictArray$$InitGameObjects
// address: 0x44fd524
// body: available
// range: 0x44fd524-0x44fd7ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44fd7fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_ObjectPoolDictArray__InitGameObjects(long param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if ((DAT_09518484 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d208);
    FUN_03f5c2a4(&DAT_0919d210);
    FUN_03f5c2a4(&DAT_0919d220);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091acd50);
    FUN_03f5c2a4(&DAT_091adcb0);
    FUN_03f5c2a4(&DAT_091acd38);
    FUN_03f5c2a4(&DAT_0917c1f0);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518484 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(param_2,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (param_2 != 0) {
    uVar2 = UnityEngine_Object__GetInstanceID(param_2,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar3 = FUN_05797528(*(long *)(param_1 + 0x20),uVar2,DAT_091adcb0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_044fd7fc;
        uVar3 = FUN_06ef0700(*(long *)(param_1 + 0x28),uVar2,DAT_0919d210);
        lVar9 = DAT_091adc88;
        if ((uVar3 & 1) == 0) {
          lVar4 = *(long *)(param_1 + 0x20);
          if (lVar4 == 0) goto LAB_044fd7fc;
          lVar7 = *(long *)(lVar4 + 0x10);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_044fd7fc;
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
          }
          else {
            FUN_057971a8(lVar4,uVar2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          lVar9 = *(long *)(param_1 + 0x28);
          uVar5 = thunk_FUN_03f9944c(DAT_0917c1f0);
          FUN_057e0400(uVar5,DAT_091acd38);
          if (lVar9 == 0) goto LAB_044fd7fc;
          FUN_06ef050c(lVar9,uVar2,uVar5,DAT_0919d208);
        }
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        lVar9 = FUN_06ef046c(*(long *)(param_1 + 0x28),uVar2,DAT_0919d220);
        uVar5 = UnityEngine_Component__get_transform(param_1,0);
        if (param_3 < 1) {
          return;
        }
        while( true ) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar7 = FUN_04c35338(param_2,uVar5,DAT_091d4bc0);
          lVar4 = DAT_091acd50;
          if (lVar9 == 0) break;
          lVar8 = *(long *)(lVar9 + 0x10);
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar8 == 0) break;
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *plVar6 = lVar7;
            thunk_FUN_03f5d7b8(plVar6,lVar7);
          }
          else {
            FUN_057e0c68(lVar9,lVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          if (lVar7 == 0) break;
          UnityEngine_GameObject__SetActive(lVar7,0,0);
          param_3 = param_3 + -1;
          if (param_3 == 0) {
            return;
          }
        }
      }
    }
  }
LAB_044fd7fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

