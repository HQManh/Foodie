// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation.<>c__DisplayClass172_0$$<Advance>b__0
// address: 0x44d7d78
// body: available
// range: 0x44d7d78-0x44d7f1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d7f1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass172_0__<Advance>b__0
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined8 param_5,
               long param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  undefined8 local_70;
  float local_68;
  
  if ((DAT_09518308 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e5b0);
    FUN_03f5c2a4(&DAT_091a95d8);
    FUN_03f5c2a4(&DAT_091a95e0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518308 = 1;
  }
  local_68 = 0.0;
  local_70 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(param_6,0);
  if ((uVar4 & 1) == 0) {
    return false;
  }
  if ((param_6 != 0) && (*(long *)(param_6 + 0x88) != 0)) {
    if (*(int *)(*(long *)(param_6 + 0x88) + 0x18) != *(int *)(param_4 + 0x18)) {
      return false;
    }
    if ((*(long *)(param_4 + 0x10) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_4 + 0x10) + 0x390), lVar5 != 0)) {
      uVar4 = FUN_06f58518(lVar5,param_5,&local_70,DAT_0919e5b0);
      if ((uVar4 & 1) == 0) {
        return false;
      }
      lVar5 = UnityEngine_Component__get_transform(param_6,0);
      if (lVar5 != 0) {
        fVar6 = (float)UnityEngine_Transform__get_localPosition(lVar5,0);
        fVar3 = local_68;
        fVar1 = (float)local_70;
        fVar2 = local_70._4_4_;
        if (DAT_09517ea7 == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_09517ea7 = '\x01';
        }
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        return 0.001 < SQRT((param_3 - fVar3) * (param_3 - fVar3) +
                            (fVar6 - fVar1) * (fVar6 - fVar1) +
                            (param_2 - fVar2) * (param_2 - fVar2));
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

