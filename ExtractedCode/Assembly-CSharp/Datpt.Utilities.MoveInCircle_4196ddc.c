// rea decompile_all
// name: Datpt.Utilities$$MoveInCircle
// address: 0x4196ddc
// body: available
// range: 0x4196ddc-0x41970a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41970a0 to 0x4d962f4 FUN_04d962f4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41970a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Datpt_Utilities__MoveInCircle
          (undefined4 param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = param_2;
  if ((DAT_095167e6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175e18);
    FUN_03f5c2a4(&DAT_09175e68);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dbe80);
    FUN_03f5c2a4(&DAT_091dbf20);
    FUN_03f5c2a4(&DAT_091f2190);
    FUN_03f5c2a4(&DAT_091f2198);
    FUN_03f5c2a4(&DAT_09195cc8);
    DAT_095167e6 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09195cc8);
  Datpt_Utilities_<>c__DisplayClass6_0___ctor(lVar1,0);
  if (lVar1 == 0) {
LAB_041970a4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  puVar8 = (undefined8 *)(lVar1 + 0x18);
  *puVar8 = param_4;
  *(undefined4 *)(lVar1 + 0x14) = param_1;
  thunk_FUN_03f5d7b8(puVar8,param_4);
  puVar7 = (undefined8 *)(lVar1 + 0x20);
  *puVar7 = param_5;
  thunk_FUN_03f5d7b8(puVar7,param_5);
  uVar5 = *puVar8;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    uVar5 = *puVar7;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      DG_Tweening_ShortcutExtensions__DOKill(*(undefined8 *)(lVar1 + 0x18),0,0);
      *(undefined4 *)(lVar1 + 0x10) = 0;
      if (*(long *)(lVar1 + 0x20) != 0) {
        lVar6 = *(long *)(lVar1 + 0x18);
        fVar9 = (float)UnityEngine_Transform__get_position(*(long *)(lVar1 + 0x20),0);
        if (DAT_09515cf0 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515cf0 = '\x01';
        }
        if (lVar6 != 0) {
          fVar10 = *(float *)(lVar1 + 0x14);
          lVar4 = *(long *)(DAT_0918cbd0 + 0xb8);
          UnityEngine_Transform__set_position
                    (fVar9 + fVar10 * *(float *)(lVar4 + 0x3c),
                     fVar11 + fVar10 * *(float *)(lVar4 + 0x40),
                     param_3 + *(float *)(lVar4 + 0x44) * fVar10,lVar6,0);
          uVar5 = thunk_FUN_03f9944c(DAT_09175e18);
          FUN_06dfb188(uVar5,lVar1,DAT_091f2190,0);
          uVar3 = thunk_FUN_03f9944c(DAT_09175e68);
          FUN_06dfc2b4(uVar3,lVar1,DAT_091f2198,0);
          if (*(int *)(DAT_09183190 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = DG_Tweening_DOTween__To(0x43b40000,param_2,uVar5,uVar3,0);
          uVar5 = FUN_04d95e8c(uVar5,1,DAT_091dbe80);
          uVar5 = FUN_04d962f4(uVar5,0xffffffff,0,DAT_091dbf20);
          return uVar5;
        }
      }
      goto LAB_041970a4;
    }
  }
  return 0;
}

