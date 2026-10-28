// rea decompile_all
// name: ChocDino.UIFX.MotionBlurReal$$CreateComponents
// address: 0x43a6d08
// body: available
// range: 0x43a6d08-0x43a6f67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a6f60 to 0x8687a28 UnityEngine.Rendering.CommandBuffer$$set_name (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43a6f64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_MotionBlurReal__CreateComponents(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_09517acb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091827a0);
    FUN_03f5c2a4(&DAT_09187e28);
    FUN_03f5c2a4(&DAT_09188058);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_092081c8);
    DAT_09517acb = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x188);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      uVar2 = thunk_FUN_03f9944c(DAT_09187e28);
      UnityEngine_Material___ctor(uVar2,uVar3,0);
      *(undefined8 *)(param_1 + 0x188) = uVar2;
      thunk_FUN_03f5d7b8(param_1 + 0x188,uVar2);
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 400);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      uVar2 = thunk_FUN_03f9944c(DAT_09187e28);
      UnityEngine_Material___ctor(uVar2,uVar3,0);
      *(undefined8 *)(param_1 + 400) = uVar2;
      thunk_FUN_03f5d7b8(param_1 + 400,uVar2);
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = thunk_FUN_03f9944c(DAT_09188058);
    UnityEngine_Mesh___ctor(uVar2,0);
    *(undefined8 *)(param_1 + 0x110) = uVar2;
    thunk_FUN_03f5d7b8(param_1 + 0x110,uVar2);
    if (*(long *)(param_1 + 0x110) == 0) goto LAB_043a6f64;
    UnityEngine_Object__SetName(*(long *)(param_1 + 0x110),DAT_092081c8,0);
    if (*(long *)(param_1 + 0x110) == 0) goto LAB_043a6f64;
    UnityEngine_Mesh__MarkDynamic(*(long *)(param_1 + 0x110),0);
  }
  if (*(long *)(param_1 + 0x198) != 0) {
    return;
  }
  uVar2 = thunk_FUN_03f9944c(DAT_091827a0);
  UnityEngine_Rendering_CommandBuffer___ctor(uVar2,0);
  *(undefined8 *)(param_1 + 0x198) = uVar2;
  thunk_FUN_03f5d7b8(param_1 + 0x198,uVar2);
  if (*(long *)(param_1 + 0x198) != 0) {
    UnityEngine_Rendering_CommandBuffer__set_name(*(long *)(param_1 + 0x198),DAT_092081c8,0);
    return;
  }
LAB_043a6f64:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

