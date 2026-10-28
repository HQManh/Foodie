// rea decompile_all
// name: Lean.Touch.LeanDragCamera$$MoveToSelection
// address: 0x73464d4
// body: available
// range: 0x73464d4-0x7346673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7346668 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x734666c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7346670 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanDragCamera__MoveToSelection
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  
  if ((DAT_095206e5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a36e0);
    FUN_03f5c2a4(&DAT_091a36e8);
    FUN_03f5c2a4(&DAT_091a36f0);
    FUN_03f5c2a4(&DAT_09187710);
    FUN_03f5c2a4(&DAT_091a9f00);
    DAT_095206e5 = 1;
  }
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  uStack_70 = 0;
  if (*(int *)(DAT_09187710 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09187710 + 0xb8) != 0) {
    FUN_056326a0(&local_a8,**(long **)(DAT_09187710 + 0xb8),DAT_091a9f00);
    iVar3 = 0;
    fVar6 = 0.0;
    fVar7 = 0.0;
    local_60 = local_88;
    fVar8 = 0.0;
    uStack_78 = puStack_a0;
    local_80 = local_a8;
    local_68 = lStack_90;
    uStack_70 = local_98;
    local_a8 = 0;
    uVar5 = local_98;
    puStack_a0 = &local_80;
    while( true ) {
      uVar1 = FUN_071bd040(&local_80,DAT_091a36e8);
      lVar2 = local_68;
      if ((uVar1 & 1) == 0) {
        FUN_071bd1e0(&local_80,DAT_091a36e0);
        if (0 < iVar3) {
          fVar4 = (float)iVar3;
          (**(code **)(*param_4 + 0x198))
                    (fVar8 / fVar4,fVar6 / fVar4,fVar7 / fVar4,param_4,
                     *(undefined8 *)(*param_4 + 0x1a0));
        }
        return;
      }
      if (local_68 == 0) break;
      uVar1 = Lean_Common_LeanSelectable__get_IsSelected(local_68,0);
      if ((uVar1 & 1) != 0) {
        lVar2 = UnityEngine_Component__get_transform(lVar2,0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        fVar4 = (float)UnityEngine_Transform__get_position(lVar2,0);
        fVar8 = fVar8 + fVar4;
        fVar6 = fVar6 + (float)uVar5;
        iVar3 = iVar3 + 1;
        fVar7 = fVar7 + param_3;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

