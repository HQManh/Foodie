// rea decompile_all
// name: AllIn1SpriteShader.RandomSeed$$Start
// address: 0x4053724
// body: available
// range: 0x4053724-0x40539c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x405385c to 0x8609380 UnityEngine.Renderer$$SetPropertyBlock (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4053930 to 0x8619714 UnityEngine.Material$$SetFloat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40539c0 to 0x85f70f4 UnityEngine.Debug$$LogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40539c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AllIn1SpriteShader_RandomSeed__Start(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  if ((DAT_09515b1d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5398);
    FUN_03f5c2a4(&DAT_091c5438);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09187e40);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09207ee0);
    FUN_03f5c2a4(&DAT_09207f08);
    DAT_09515b1d = 1;
  }
  lVar2 = FUN_04a6a14c(param_1,DAT_091c5438);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Inequality(lVar2,0,0);
  if ((uVar3 & 1) == 0) {
    plVar7 = (long *)FUN_04a6a14c(param_1,DAT_091c5398);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Inequality(plVar7,0,0);
    if ((uVar3 & 1) == 0) {
      lVar2 = UnityEngine_Component__get_gameObject(param_1,0);
      if (lVar2 != 0) {
        uVar5 = UnityEngine_Object__GetName(lVar2,0);
        puVar6 = &DAT_09207f08;
LAB_04053978:
        uVar5 = System_String__Concat(*puVar6,uVar5,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091835d0);
        }
        UnityEngine_Debug__LogError(uVar5,0);
        return;
      }
    }
    else if (plVar7 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar7 + 0x338))(plVar7,*(undefined8 *)(*plVar7 + 0x340));
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar3 & 1) == 0) {
        lVar2 = UnityEngine_Component__get_gameObject(param_1,0);
        if (lVar2 != 0) {
          uVar5 = UnityEngine_Object__GetName(lVar2,0);
          puVar6 = &DAT_09207ee0;
          goto LAB_04053978;
        }
      }
      else {
        lVar2 = (**(code **)(*plVar7 + 0x338))(plVar7,*(undefined8 *)(*plVar7 + 0x340));
        uVar1 = *(undefined4 *)(param_1 + 0x20);
        UnityEngine_Random__Range(0,0x447a0000,0);
        if (lVar2 != 0) {
          UnityEngine_Material__SetFloat(lVar2,uVar1,0);
          return;
        }
      }
    }
  }
  else {
    lVar4 = thunk_FUN_03f9944c(DAT_09187e40);
    UnityEngine_MaterialPropertyBlock___ctor(lVar4,0);
    plVar7 = (long *)(param_1 + 0x28);
    *plVar7 = lVar4;
    thunk_FUN_03f5d7b8(plVar7,lVar4);
    lVar4 = *plVar7;
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    UnityEngine_Random__Range(0,0x42c80000,0);
    if ((lVar4 != 0) && (UnityEngine_MaterialPropertyBlock__SetFloat(lVar4,uVar1,0), lVar2 != 0)) {
      UnityEngine_Renderer__SetPropertyBlock(lVar2,*plVar7,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

