// rea decompile_all
// name: CakeOrder.Home.UIHomeNavControl$$ResizeTabs
// address: 0x4300e4c
// body: available
// range: 0x4300e4c-0x430123f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43010c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43011e0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4301238 to 0x43014ec CakeOrder.Home.UIHomeNavControl$$ApplyTabWeights (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x430123c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeNavControl__ResizeTabs(long param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  
  if ((DAT_0951754b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175e18);
    FUN_03f5c2a4(&DAT_09175e68);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dbe80);
    FUN_03f5c2a4(&DAT_091dc008);
    FUN_03f5c2a4(&DAT_091f15e0);
    FUN_03f5c2a4(&DAT_091f15e8);
    FUN_03f5c2a4(&DAT_091955f8);
    DAT_0951754b = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_091955f8);
  System_Object___ctor(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar4 + 0x18),param_1);
    lVar6 = *(long *)(param_1 + 0xb8);
    if (lVar6 == 0) {
      return;
    }
    uVar11 = 0;
    bVar2 = false;
    do {
      if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar11) {
        if (!bVar2) {
          return;
        }
        lVar6 = *(long *)(param_1 + 0xd8);
        if (lVar6 != 0) {
          DG_Tweening_TweenExtensions__Kill(lVar6,0,0);
        }
        uVar9 = DAT_09175e18;
        if (((param_2 & 1) != 0) && (0.0 < *(float *)(param_1 + 0x9c))) {
          *(undefined4 *)(lVar4 + 0x10) = 0;
          uVar9 = thunk_FUN_03f9944c(uVar9);
          FUN_06dfb188(uVar9,lVar4,DAT_091f15e0,0);
          uVar10 = thunk_FUN_03f9944c(DAT_09175e68);
          FUN_06dfc2b4(uVar10,lVar4,DAT_091f15e8,0);
          uVar15 = *(undefined4 *)(param_1 + 0x9c);
          if (*(int *)(DAT_09183190 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar9 = DG_Tweening_DOTween__To(0x3f800000,uVar15,uVar9,uVar10,0);
          uVar9 = FUN_04d95e8c(uVar9,*(undefined4 *)(param_1 + 0xa0),DAT_091dbe80);
          uVar9 = FUN_04d9656c(uVar9,1,DAT_091dc008);
          *(undefined8 *)(param_1 + 0xd8) = uVar9;
          thunk_FUN_03f5d7b8((long *)(param_1 + 0xd8));
          return;
        }
        CakeOrder_Home_UIHomeNavControl__ApplyTabWeights(0x3f800000,param_1);
        return;
      }
      uVar9 = *(undefined8 *)(param_1 + 0xa8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        lVar6 = *(long *)(param_1 + 0xb8);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_0430123c;
        if (*(long *)(param_1 + 0xa8) == 0) break;
        uVar10 = *(undefined8 *)(lVar6 + uVar11 * 8 + 0x20);
        uVar9 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xa8),0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar3 = UnityEngine_Object__op_Equality(uVar10,uVar9,0);
        uVar3 = uVar3 & 1;
      }
      lVar6 = *(long *)(param_1 + 0xc0);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar11) {
LAB_0430123c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar7 = *(long *)(param_1 + 200);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_0430123c;
      lVar1 = 0x94;
      if (uVar3 != 0) {
        lVar1 = 0x98;
      }
      lVar7 = lVar7 + uVar11 * 4;
      lVar8 = *(long *)(param_1 + 0xd0);
      *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar6 + uVar11 * 4 + 0x20);
      if (lVar8 == 0) break;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_0430123c;
      fVar16 = *(float *)(param_1 + lVar1);
      *(float *)(lVar8 + uVar11 * 4 + 0x20) = fVar16;
      fVar17 = *(float *)(lVar7 + 0x20);
      if (DAT_09515cee == '\0') {
        FUN_03f5c2a4(&DAT_09187e98);
        DAT_09515cee = '\x01';
      }
      fVar12 = ABS(fVar17);
      uVar11 = uVar11 + 1;
      if (fVar12 <= ABS(fVar16)) {
        fVar12 = ABS(fVar16);
      }
      lVar6 = *(long *)(param_1 + 0xb8);
      fVar14 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
      fVar13 = fVar12 * 1e-06;
      if (fVar12 * 1e-06 <= fVar14) {
        fVar13 = fVar14;
      }
      bVar2 = (bool)(bVar2 | fVar13 <= ABS(fVar16 - fVar17));
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

