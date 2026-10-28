// rea decompile_all
// name: ChocDino.UIFX.ExtrudeFilter$$SetupFilterParams
// address: 0x43d0bf0
// body: available
// range: 0x43d0bf0-0x43d0ddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43d0dd4 to 0x43cefa8 ChocDino.UIFX.Extrude$$set_RectRatio (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43d0dd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_ExtrudeFilter__SetupFilterParams(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  
  if (*(long *)(param_1 + 0x228) == 0) goto LAB_043d0dd8;
  ChocDino_UIFX_Extrude__set_Projection(*(long *)(param_1 + 0x228),*(undefined4 *)(param_1 + 0x1c4))
  ;
  if (*(long *)(param_1 + 0x228) == 0) goto LAB_043d0dd8;
  ChocDino_UIFX_Extrude__set_Angle(*(undefined4 *)(param_1 + 0x1c8));
  if (*(long *)(param_1 + 0x228) == 0) goto LAB_043d0dd8;
  ChocDino_UIFX_Extrude__set_Distance(*(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x1d0));
  if (*(long *)(param_1 + 0x228) == 0) goto LAB_043d0dd8;
  ChocDino_UIFX_Extrude__set_PerspectiveDistance(*(undefined4 *)(param_1 + 0x1cc));
  iVar2 = *(int *)(param_1 + 0x1d4);
  if (iVar2 == 0) {
    if (*(long *)(param_1 + 0x228) == 0) goto LAB_043d0dd8;
    ChocDino_UIFX_Extrude__set_Color1
              (*(undefined4 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1dc),
               *(undefined4 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1e4));
    if (*(long *)(param_1 + 0x228) == 0) goto LAB_043d0dd8;
    ChocDino_UIFX_Extrude__set_Color2
              (*(undefined4 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1dc),
               *(undefined4 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1e4));
    lVar3 = *(long *)(param_1 + 0x228);
    if (lVar3 == 0) goto LAB_043d0dd8;
    iVar2 = *(int *)(param_1 + 0x1d4);
    *(undefined1 *)(lVar3 + 0x20) = 0;
    *(undefined1 *)(lVar3 + 0x88) = 1;
  }
  if (iVar2 == 3) {
    lVar3 = *(long *)(param_1 + 0x228);
    if (lVar3 == 0) goto LAB_043d0dd8;
    *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined1 *)(lVar3 + 0x20) = 1;
    puVar4 = (undefined1 *)(lVar3 + 0x88);
    *puVar4 = 1;
    thunk_FUN_03f5d7b8();
LAB_043d0d74:
    *puVar4 = 1;
  }
  else {
    if (iVar2 == 2) {
      lVar3 = *(long *)(param_1 + 0x228);
      if (lVar3 == 0) goto LAB_043d0dd8;
      lVar1 = *(long *)(param_1 + 0x220);
      *(undefined1 *)(lVar3 + 0x20) = 1;
      *(undefined1 *)(lVar3 + 0x88) = 1;
      if (lVar1 == 0) goto LAB_043d0dd8;
      ChocDino_UIFX_GradientTexture__Update(lVar1,*(undefined8 *)(param_1 + 0x200),0);
      if ((*(long *)(param_1 + 0x220) == 0) || (lVar3 = *(long *)(param_1 + 0x228), lVar3 == 0))
      goto LAB_043d0dd8;
      *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(*(long *)(param_1 + 0x220) + 0x18);
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x48));
      puVar4 = (undefined1 *)(lVar3 + 0x88);
      goto LAB_043d0d74;
    }
    if (iVar2 == 1) {
      if (*(long *)(param_1 + 0x228) == 0) goto LAB_043d0dd8;
      ChocDino_UIFX_Extrude__set_Color1
                (*(undefined4 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1dc),
                 *(undefined4 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1e4));
      if (*(long *)(param_1 + 0x228) == 0) goto LAB_043d0dd8;
      ChocDino_UIFX_Extrude__set_Color2
                (*(undefined4 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1ec),
                 *(undefined4 *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 500));
      lVar3 = *(long *)(param_1 + 0x228);
      if (lVar3 == 0) goto LAB_043d0dd8;
      *(undefined1 *)(lVar3 + 0x20) = 0;
      puVar4 = (undefined1 *)(lVar3 + 0x88);
      goto LAB_043d0d74;
    }
  }
  if (*(long *)(param_1 + 0x228) != 0) {
    ChocDino_UIFX_Extrude__set_ReverseFill
              (*(long *)(param_1 + 0x228),*(undefined1 *)(param_1 + 0x20c));
    if (*(long *)(param_1 + 0x228) != 0) {
      ChocDino_UIFX_Extrude__set_Scroll(*(undefined4 *)(param_1 + 0x230));
      if (*(long *)(param_1 + 0x228) != 0) {
        ChocDino_UIFX_Extrude__set_MultiplySource
                  (*(long *)(param_1 + 0x228),*(int *)(param_1 + 0x210) == 1);
        lVar3 = *(long *)(param_1 + 0x60);
        if ((lVar3 != 0) && (*(long *)(param_1 + 0x228) != 0)) {
          ChocDino_UIFX_Extrude__set_RectRatio
                    (*(undefined4 *)(lVar3 + 0x2c),*(undefined4 *)(lVar3 + 0x30),
                     *(undefined4 *)(lVar3 + 0x34),*(undefined4 *)(lVar3 + 0x38));
          return;
        }
      }
    }
  }
LAB_043d0dd8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

