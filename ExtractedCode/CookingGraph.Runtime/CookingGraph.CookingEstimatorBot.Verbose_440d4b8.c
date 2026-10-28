// rea decompile_all
// name: CookingGraph.CookingEstimatorBot$$Verbose
// address: 0x440d4b8
// body: available
// range: 0x440d4b8-0x440d90f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x440d90c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingEstimatorBot__Verbose
               (long param_1,uint param_2,undefined8 param_3,long param_4,long param_5,long param_6)

{
  undefined4 uVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  ulong local_58;
  
  if ((DAT_09517eea & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182d00);
    FUN_03f5c2a4(&DAT_091858d8);
    FUN_03f5c2a4(&DAT_091b23d0);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_091b6fb8);
    DAT_09517eea = 1;
  }
  if (*(char *)(param_1 + 0xc0) == '\0') {
    return;
  }
  plVar10 = *(long **)(param_1 + 0x78);
  if (plVar10 == (long *)0x0) {
    return;
  }
  if (param_5 == 0) {
    bVar2 = false;
  }
  else if ((param_2 & 0xfffffffe) == 10) {
    bVar2 = true;
  }
  else {
    bVar2 = param_2 == 0xc;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09182d00);
  *(undefined4 *)(lVar3 + 0x28) = 0xbf800000;
  *(undefined4 *)(lVar3 + 0x48) = 0xbf800000;
  *(undefined4 *)(lVar3 + 0x54) = 0xbf800000;
  *(undefined8 *)(lVar3 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(lVar3 + 0x30) = 0xffffffffffffffff;
  *(undefined4 *)(lVar3 + 0x38) = 0xffffffff;
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(lVar3 + 0x7c) = 0x3f800000ffffffff;
  *(undefined8 *)(lVar3 + 0x88) = 0xffffffffffffffff;
  *(undefined4 *)(lVar3 + 0x90) = 0xffffffff;
  System_Object___ctor(lVar3,0);
  *(uint *)(lVar3 + 0x10) = param_2;
  *(undefined8 *)(lVar3 + 0x18) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x18),param_3);
  if (param_4 == 0) {
    uVar11 = 0xbf800000;
    *(undefined8 *)(lVar3 + 0x20) = 0xffffffffffffffff;
  }
  else {
    uVar11 = *(undefined4 *)(param_4 + 0x18);
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_4 + 0x10);
  }
  *(undefined4 *)(lVar3 + 0x28) = uVar11;
  if (param_6 == 0) {
    uVar7 = 0xffffffffffffffff;
  }
  else {
    uVar7 = *(undefined8 *)(param_6 + 0x10);
  }
  *(undefined8 *)(lVar3 + 0x30) = uVar7;
  if (param_5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(long *)(param_5 + 0x10) != 0) {
      local_58 = 0;
      FUN_05c3078c(&local_58,*(undefined4 *)(*(long *)(param_5 + 0x10) + 0x10),DAT_091b6f98);
      uVar8 = local_58;
    }
  }
  uVar11 = (undefined4)(uVar8 >> 0x20);
  if ((uVar8 & 0xff) == 0) {
    uVar11 = 0xffffffff;
  }
  if ((param_6 != 0) && ((uVar8 & 0xff) == 0)) {
    uVar11 = *(undefined4 *)(param_6 + 0x20);
  }
  *(undefined4 *)(lVar3 + 0x38) = uVar11;
  if (param_5 == 0) {
    if (param_6 == 0) {
      *(undefined8 *)(lVar3 + 0x40) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x40),0);
      uVar6 = 0;
      *(undefined4 *)(lVar3 + 0x48) = 0xbf800000;
    }
    else {
      *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(param_6 + 0x28);
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x40));
      uVar6 = *(undefined1 *)(param_6 + 0x34);
      *(undefined4 *)(lVar3 + 0x48) = *(undefined4 *)(param_6 + 0x30);
    }
  }
  else {
    if (*(long *)(param_5 + 0x10) == 0) {
      if (param_6 != 0) goto LAB_0440d6c4;
      lVar5 = 0;
      *(undefined8 *)(lVar3 + 0x40) = 0;
    }
    else {
      lVar5 = *(long *)(*(long *)(param_5 + 0x10) + 0x18);
      if ((param_6 != 0) && (lVar5 == 0)) {
LAB_0440d6c4:
        lVar5 = *(long *)(param_6 + 0x28);
      }
      *(long *)(lVar3 + 0x40) = lVar5;
    }
    thunk_FUN_03f5d7b8(lVar3 + 0x40,lVar5);
    uVar6 = *(undefined1 *)(param_5 + 0x1c);
    *(undefined4 *)(lVar3 + 0x48) = *(undefined4 *)(param_5 + 0x18);
  }
  lVar5 = *(long *)(param_1 + 0x28);
  *(undefined1 *)(lVar3 + 0x4c) = uVar6;
  if (lVar5 != 0) {
    fVar12 = *(float *)(param_1 + 0x5c);
    *(undefined4 *)(lVar3 + 0x50) = *(undefined4 *)(lVar5 + 0x18);
    fVar13 = -1.0;
    if (fVar12 != -INFINITY) {
      fVar13 = fVar12;
    }
    *(float *)(lVar3 + 0x54) = fVar13;
    if (bVar2) {
      if (param_5 == 0) goto LAB_0440d90c;
      uVar11 = *(undefined4 *)(param_5 + 0x40);
      *(undefined4 *)(lVar3 + 0x58) = *(undefined4 *)(param_5 + 0x3c);
    }
    else {
      uVar11 = 0xffffffff;
      *(undefined4 *)(lVar3 + 0x58) = 0xffffffff;
    }
    uVar14 = *(undefined4 *)(param_1 + 0x84);
    uVar1 = *(undefined4 *)(param_1 + 0xa8);
    lVar5 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(lVar3 + 0x5c) = uVar11;
    *(undefined4 *)(lVar3 + 0x60) = uVar14;
    *(undefined4 *)(lVar3 + 100) = uVar1;
    if (lVar5 != 0) {
      *(undefined4 *)(lVar3 + 0x68) = *(undefined4 *)(lVar5 + 0x70);
      uVar11 = CookingGraph_CookingEstimatorBot__ResolveWorkWaitStrategy(param_1);
      lVar5 = *(long *)(param_1 + 0xb8);
      *(undefined4 *)(lVar3 + 0x6c) = uVar11;
      if (lVar5 == 0) {
        lVar5 = *(long *)(param_1 + 0x20);
        *(undefined1 *)(lVar3 + 0x70) = 0;
        *(undefined4 *)(lVar3 + 0x74) = 0;
        *(undefined1 *)(lVar3 + 0x78) = 0;
        if (lVar5 == 0) goto LAB_0440d90c;
        uVar11 = *(undefined4 *)(lVar5 + 0x6c);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar11 = System_Math__Max(1,uVar11,0);
      }
      else {
        uVar14 = *(undefined4 *)(lVar5 + 0x3c);
        uVar6 = *(undefined1 *)(lVar5 + 0x40);
        uVar11 = *(undefined4 *)(lVar5 + 0x50);
        *(undefined1 *)(lVar3 + 0x70) = *(undefined1 *)(lVar5 + 0x38);
        *(undefined4 *)(lVar3 + 0x74) = uVar14;
        *(undefined1 *)(lVar3 + 0x78) = uVar6;
      }
      uVar14 = *(undefined4 *)(param_1 + 0xac);
      *(undefined4 *)(lVar3 + 0x7c) = uVar11;
      *(undefined4 *)(lVar3 + 0x80) = uVar14;
      lVar5 = CookingGraph_CookingEstimatorBot__EffectiveSettings(param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar3 + 0x84) = *(undefined4 *)(lVar5 + 0x68);
        if (param_4 == 0) {
          uVar11 = 0xffffffff;
          *(undefined8 *)(lVar3 + 0x88) = 0xffffffffffffffff;
        }
        else {
          uVar11 = *(undefined4 *)(param_4 + 0x50);
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar14 = System_Math__Max(0,uVar11,0);
          lVar5 = DAT_09187e80;
          uVar11 = *(undefined4 *)(param_4 + 0x54);
          *(undefined4 *)(lVar3 + 0x88) = uVar14;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar14 = System_Math__Max(0,uVar11,0);
          uVar11 = *(undefined4 *)(param_4 + 0x6c);
          *(undefined4 *)(lVar3 + 0x8c) = uVar14;
        }
        *(undefined4 *)(lVar3 + 0x90) = uVar11;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_091858d8) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0440d8ac;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091858d8,0);
LAB_0440d8ac:
        (*(code *)*puVar4)(plVar10,lVar3,puVar4[1]);
        return;
      }
    }
  }
LAB_0440d90c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

