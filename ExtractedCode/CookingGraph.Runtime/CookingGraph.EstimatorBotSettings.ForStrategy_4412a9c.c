// rea decompile_all
// name: CookingGraph.EstimatorBotSettings$$ForStrategy
// address: 0x4412a9c
// body: available
// range: 0x4412a9c-0x4412e13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4412d18 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4412e08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4412e10 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * CookingGraph_EstimatorBotSettings__ForStrategy(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  int local_24;
  
  if ((DAT_09517f31 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184168);
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09517f31 = 1;
  }
  plVar3 = (long *)System_Object__MemberwiseClone(param_1,0);
  lVar2 = DAT_09187e80;
  if ((plVar3 != (long *)0x0) && (*plVar3 != DAT_09184168)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(plVar3);
  }
  if (param_2 < 4) {
    if (param_2 < 2) {
      if (param_2 != 0) {
        if (param_2 != 1) goto LAB_04412cb0;
        if (plVar3 == (long *)0x0) goto LAB_04412e08;
        uVar8 = *(undefined4 *)((long)plVar3 + 100);
        *(undefined4 *)(plVar3 + 4) = 0;
        iVar1 = *(int *)(lVar2 + 0xe4);
        *(float *)((long)plVar3 + 0x2c) = *(float *)((long)plVar3 + 0x2c) * 0.25;
        *(float *)((long)plVar3 + 0x1c) = *(float *)((long)plVar3 + 0x1c) * 0.3;
        plVar3[0xb] = CONCAT44((float)((ulong)plVar3[0xb] >> 0x20) * 1.6,(float)plVar3[0xb] * 0.55);
        *(float *)(plVar3 + 0xc) = *(float *)(plVar3 + 0xc) * 1.6;
        if (iVar1 == 0) {
          FUN_03f5c424();
        }
        uVar8 = System_Math__Max(uVar8,0x3f2e147b,0);
        *(undefined4 *)((long)plVar3 + 100) = uVar8;
      }
    }
    else if (param_2 == 2) {
      if (plVar3 == (long *)0x0) goto LAB_04412e08;
      *(float *)((long)plVar3 + 0x2c) = *(float *)((long)plVar3 + 0x2c) * 0.15;
      *(ulong *)((long)plVar3 + 0x14) =
           CONCAT44((float)((ulong)*(undefined8 *)((long)plVar3 + 0x14) >> 0x20) * 1.2,
                    (float)*(undefined8 *)((long)plVar3 + 0x14) * 1.15);
      *(float *)((long)plVar3 + 0x1c) = *(float *)((long)plVar3 + 0x1c) * 0.25;
      plVar3[0xb] = CONCAT44((float)((ulong)plVar3[0xb] >> 0x20) * 1.35,(float)plVar3[0xb] * 0.3);
    }
    else {
      if (param_2 != 3) goto LAB_04412cb0;
      if (plVar3 == (long *)0x0) goto LAB_04412e08;
      *(undefined4 *)(plVar3 + 4) = 0;
      *(float *)((long)plVar3 + 0x2c) = *(float *)((long)plVar3 + 0x2c) * 0.2;
      plVar3[3] = CONCAT44((float)((ulong)plVar3[3] >> 0x20) * 0.3,(float)plVar3[3] * 1.45);
      *(float *)(plVar3 + 8) = *(float *)(plVar3 + 8) * 3.0;
      *(float *)(plVar3 + 0xb) = *(float *)(plVar3 + 0xb) * 0.6;
    }
  }
  else {
    if (param_2 < 6) {
      if (param_2 == 4) {
        if (plVar3 != (long *)0x0) {
          *(float *)((long)plVar3 + 0x1c) = *(float *)((long)plVar3 + 0x1c) * 0.55;
          *(ulong *)((long)plVar3 + 0x2c) =
               CONCAT44((float)((ulong)*(undefined8 *)((long)plVar3 + 0x2c) >> 0x20) * 1.75,
                        (float)*(undefined8 *)((long)plVar3 + 0x2c) * 0.35);
          plVar3[7] = CONCAT44((float)((ulong)plVar3[7] >> 0x20) * 1.4,(float)plVar3[7] * 1.6);
          *(float *)(plVar3 + 0xb) = *(float *)(plVar3 + 0xb) * 0.7;
          return plVar3;
        }
LAB_04412e08:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (param_2 != 5) goto LAB_04412cb0;
      if (plVar3 == (long *)0x0) goto LAB_04412e08;
      lVar2 = plVar3[9];
      iVar1 = *(int *)(DAT_09187e80 + 0xe4);
      *(float *)((long)plVar3 + 0x2c) = *(float *)((long)plVar3 + 0x2c) * 0.25;
      if (iVar1 == 0) {
        FUN_03f5c424();
      }
      uVar8 = System_Math__Max((int)lVar2,0x3f400000,0);
      *(undefined4 *)(plVar3 + 9) = uVar8;
      uVar8 = System_Math__Max(*(undefined4 *)((long)plVar3 + 0x4c),0x3fb33333,0);
      *(undefined4 *)((long)plVar3 + 0x4c) = uVar8;
      fVar7 = *(float *)(plVar3 + 0xb) * 0.65;
    }
    else {
      if (param_2 != 6) {
        if (param_2 == 7) {
          return plVar3;
        }
LAB_04412cb0:
        local_24 = param_2;
        uVar4 = thunk_FUN_03fc39d4(&DAT_09182cf0);
        uVar4 = FUN_03f5c42c(uVar4,&local_24);
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar5 = thunk_FUN_03f9944c();
        uVar6 = thunk_FUN_03fc39d4(&DAT_092235c8);
        System_ArgumentOutOfRangeException___ctor(uVar5,uVar6,uVar4,0,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091cb790);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,uVar4);
      }
      if (plVar3 == (long *)0x0) goto LAB_04412e08;
      *(undefined4 *)((long)plVar3 + 0x2c) = 0;
      fVar7 = *(float *)(plVar3 + 0xb) * 0.5;
      *(ulong *)((long)plVar3 + 0x1c) =
           CONCAT44((float)((ulong)*(undefined8 *)((long)plVar3 + 0x1c) >> 0x20) * 0.25,
                    (float)*(undefined8 *)((long)plVar3 + 0x1c) * 0.45);
    }
    *(float *)(plVar3 + 0xb) = fVar7;
  }
  return plVar3;
}

