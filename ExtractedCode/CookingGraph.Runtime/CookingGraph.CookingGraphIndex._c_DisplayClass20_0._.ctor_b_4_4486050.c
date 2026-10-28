// rea decompile_all
// name: CookingGraph.CookingGraphIndex.<>c__DisplayClass20_0$$<.ctor>b__4
// address: 0x4486050
// body: available
// range: 0x4486050-0x448663f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44865b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x448663c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CookingGraph_CookingGraphIndex_<>c__DisplayClass20_0__<_ctor>b__4(long param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auVar15 [12];
  
  if ((DAT_095180d6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9498);
    FUN_03f5c2a4(&DAT_091c9390);
    FUN_03f5c2a4(&DAT_091c9798);
    FUN_03f5c2a4(&DAT_091c9920);
    FUN_03f5c2a4(&DAT_091ca668);
    FUN_03f5c2a4(&DAT_091ca768);
    FUN_03f5c2a4(&DAT_091ca258);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091cace8);
    FUN_03f5c2a4(&DAT_091782a0);
    FUN_03f5c2a4(&DAT_09179138);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_09178290);
    FUN_03f5c2a4(&DAT_09178e70);
    FUN_03f5c2a4(&DAT_091b0fd8);
    FUN_03f5c2a4(&DAT_091af2c8);
    FUN_03f5c2a4(&DAT_0918f270);
    FUN_03f5c2a4(&DAT_091e71b8);
    FUN_03f5c2a4(&DAT_091e71c0);
    FUN_03f5c2a4(&DAT_091e7290);
    FUN_03f5c2a4(&DAT_091e7298);
    FUN_03f5c2a4(&DAT_091e7300);
    FUN_03f5c2a4(&DAT_0918f1a0);
    FUN_03f5c2a4(&DAT_0918f178);
    FUN_03f5c2a4(&DAT_092257f0);
    DAT_095180d6 = 1;
  }
  lVar5 = thunk_FUN_03f9944c(DAT_0918f1a0);
  System_Object___ctor(lVar5,0);
  if (lVar5 == 0) {
LAB_044865b4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(long *)(lVar5 + 0x18) = param_1;
  thunk_FUN_03f5d7b8((long *)(lVar5 + 0x18),param_1);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_044865b4;
  auVar15 = CookingGraph_CookingRuntimeSettings__ProcessFor(*(long *)(param_1 + 0x10),param_2);
  if (((*(long *)(param_1 + 0x18) == 0) || (param_2 == 0)) ||
     (lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x40), lVar6 == 0)) goto LAB_044865b4;
  uVar3 = FUN_057e1a08(lVar6,*(undefined8 *)(param_2 + 0x10),DAT_091b0fd8);
  lVar6 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(lVar5 + 0x10) = uVar3;
  if (lVar6 == 0) goto LAB_044865b4;
  uVar3 = CookingGraph_CookingGraphIndex__Ingredient(lVar6,*(undefined8 *)(param_2 + 0x18));
  if (-1 < *(int *)(lVar5 + 0x10)) {
    lVar6 = *(long *)(param_2 + 0x20);
    if (lVar6 == 0) goto LAB_044865b4;
    if (*(int *)(lVar6 + 0x18) != 0) {
      lVar13 = *(long *)(param_1 + 0x28);
      if (lVar13 == 0) {
        lVar13 = thunk_FUN_03f9944c(DAT_09178e70);
        FUN_05321dfc(lVar13,param_1,DAT_091e7290,0);
        *(long *)(param_1 + 0x28) = lVar13;
        thunk_FUN_03f5d7b8((long *)(param_1 + 0x28),lVar13);
      }
      uVar7 = FUN_04af4cb4(lVar6,lVar13,DAT_091ca668);
      lVar6 = FUN_04b04054(uVar7,DAT_091cace8);
      if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f178);
      }
      puVar12 = *(undefined8 **)(DAT_0918f178 + 0xb8);
      lVar13 = puVar12[6];
      if (lVar13 == 0) {
        if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f178);
          puVar12 = *(undefined8 **)(DAT_0918f178 + 0xb8);
        }
        uVar7 = *puVar12;
        lVar13 = thunk_FUN_03f9944c(DAT_091782a0);
        FUN_0530d4d8(lVar13,uVar7,DAT_091e71b8,0);
        plVar8 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0x30);
        *plVar8 = lVar13;
        thunk_FUN_03f5d7b8(plVar8,lVar13);
      }
      uVar7 = FUN_04aee7c4(lVar6,lVar13,DAT_091ca258);
      uVar7 = FUN_04add3a4(uVar7,DAT_091c9920);
      iVar4 = FUN_04ad7c28(uVar7,DAT_091c9798);
      if (lVar6 == 0) goto LAB_044865b4;
      if (iVar4 == *(int *)(lVar6 + 0x18)) {
        uVar7 = thunk_FUN_03f9944c(DAT_09178290);
        FUN_0530cf38(uVar7,lVar5,DAT_091e7300,0);
        uVar9 = FUN_04ab46c8(lVar6,uVar7,DAT_091c9390);
        if ((uVar9 & 1) == 0) {
          lVar13 = *(long *)(param_1 + 0x30);
          uVar7 = *(undefined8 *)(param_2 + 0x40);
          if (lVar13 == 0) {
            lVar13 = thunk_FUN_03f9944c(DAT_09179138);
            FUN_053239c8(lVar13,param_1,DAT_091e7298,0);
            *(long *)(param_1 + 0x30) = lVar13;
            thunk_FUN_03f5d7b8((long *)(param_1 + 0x30),lVar13);
          }
          uVar7 = FUN_04af6d6c(uVar7,lVar13,DAT_091ca768);
          uVar7 = FUN_04b0462c(uVar7,DAT_091cae30);
          if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f178);
          }
          puVar12 = *(undefined8 **)(DAT_0918f178 + 0xb8);
          lVar13 = puVar12[7];
          if (lVar13 == 0) {
            if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f178);
              puVar12 = *(undefined8 **)(DAT_0918f178 + 0xb8);
            }
            uVar14 = *puVar12;
            lVar13 = thunk_FUN_03f9944c(DAT_09178b98);
            FUN_05315754(lVar13,uVar14,DAT_091e71c0,0);
            plVar8 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0x38);
            *plVar8 = lVar13;
            thunk_FUN_03f5d7b8(plVar8,lVar13);
          }
          uVar9 = FUN_04ab6928(uVar7,lVar13,DAT_091c9498);
          if ((uVar9 & 1) == 0) {
            lVar13 = thunk_FUN_03f9944c(DAT_0918f270);
            System_Object___ctor(lVar13,0);
            if (lVar13 != 0) {
              uVar1 = *(undefined4 *)(lVar5 + 0x10);
              *(int *)(lVar13 + 0x18) = auVar15._8_4_;
              uVar14 = DAT_092257f0;
              uVar10 = *(undefined8 *)(param_2 + 0x30);
              *(undefined4 *)(lVar13 + 0x10) = uVar1;
              *(undefined4 *)(lVar13 + 0x14) = uVar3;
              *(bool *)(lVar13 + 0x1c) = (auVar15._0_8_ & 0xff00000000) != 0;
              bVar2 = System_String__op_Equality(uVar10,uVar14,0);
              *(byte *)(lVar13 + 0x1d) = bVar2 & 1;
              *(long *)(lVar13 + 0x30) = lVar6;
              *(double *)(lVar13 + 0x28) = (double)auVar15._0_4_;
              thunk_FUN_03f5d7b8((long *)(lVar13 + 0x30),lVar6);
              *(undefined8 *)(lVar13 + 0x38) = uVar7;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar13 + 0x38),uVar7);
              return lVar13;
            }
            goto LAB_044865b4;
          }
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar7 = thunk_FUN_03f9944c();
          puVar11 = &DAT_092123a8;
          goto LAB_04486614;
        }
      }
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar7 = thunk_FUN_03f9944c();
      puVar11 = &DAT_0920b6c0;
      goto LAB_04486614;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar7 = thunk_FUN_03f9944c();
  puVar11 = &DAT_0920b6c8;
LAB_04486614:
  uVar14 = thunk_FUN_03fc39d4(puVar11);
  System_ArgumentException___ctor(uVar7,uVar14,0);
  uVar14 = thunk_FUN_03fc39d4(&DAT_091e72b8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar14);
}

