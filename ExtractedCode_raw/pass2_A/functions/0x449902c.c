// rea decompile_all
// name: FUN_0449902c
// address: 0x449902c
// body: available
// range: 0x449902c-0x44992e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4499298 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449929c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44992e4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0449902c(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *in_x10;
  long unaff_x19;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000020;
  long in_stack_00000048;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000020 = param_2;
  uVar3 = FUN_06e88030(param_1,&stack0x00000020,&stack0x00000048,*in_x10);
  if ((uVar3 & 1) == 0) {
LAB_044992a0:
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar4 = thunk_FUN_03f9944c();
    uVar9 = thunk_FUN_03fc39d4(&DAT_092059e0);
    System_ArgumentException___ctor(uVar4,uVar9,0);
    uVar9 = thunk_FUN_03fc39d4(&DAT_091c6490);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar9);
  }
  if ((in_stack_00000048 != 0) && (*(long *)(in_stack_00000048 + 0x18) != 0)) {
    iVar2 = *(int *)(*(long *)(in_stack_00000048 + 0x18) + 0x18);
    uVar9 = *(undefined8 *)(unaff_x19 + 0x38);
    uVar4 = thunk_FUN_03f9944c(DAT_09179320);
    FUN_05322d94();
    iVar1 = FUN_04adc4d0(uVar9,uVar4,DAT_091c9888);
    if ((param_3 != 0) && (in_stack_00000048 != 0)) {
      if (iVar1 + iVar2 + *(int *)(param_3 + 0x18) <= *(int *)(in_stack_00000048 + 0x10)) {
        uVar4 = thunk_FUN_03f9944c(DAT_09178768);
        FUN_053136a4();
        uVar3 = FUN_04ab6608(param_3,uVar4,DAT_091c9460);
        if ((uVar3 & 1) == 0) {
          if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar6 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
          lVar8 = puVar6[4];
          if (lVar8 == 0) {
            if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar6 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
            }
            uVar4 = *puVar6;
            lVar8 = thunk_FUN_03f9944c(DAT_09178778);
            FUN_05313f40(lVar8,uVar4,DAT_091e6c50,0);
            plVar5 = (long *)(*(long *)(DAT_0918ef00 + 0xb8) + 0x20);
            *plVar5 = lVar8;
            thunk_FUN_03f5d7b8(plVar5,lVar8);
          }
          uVar4 = FUN_04af142c(param_3,lVar8,DAT_091ca3b8);
          uVar4 = FUN_04add45c(uVar4,DAT_091c9928);
          iVar2 = FUN_04ad8358(uVar4,DAT_091c97a0);
          if (iVar2 == *(int *)(param_3 + 0x18)) {
            if ((in_stack_00000048 != 0) && (*(long *)(in_stack_00000048 + 0x18) != 0)) {
              FUN_057484b8(*(long *)(in_stack_00000048 + 0x18),param_3,DAT_091ac0e0);
              if (0 < (int)*(ulong *)(param_3 + 0x18)) {
                uVar3 = 0;
                uVar7 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
                piVar10 = (int *)(param_3 + 0x2c);
                do {
                  if (uVar7 <= uVar3) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_04499298;
                  uVar4 = *(undefined8 *)(piVar10 + -3);
                  iVar2 = *piVar10;
                  FUN_053e230c(*(long *)(unaff_x19 + 0x20),uVar4,DAT_091a8308);
                  if (iVar2 == 2) {
                    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_04499298;
                    FUN_053e230c(*(long *)(unaff_x19 + 0x30),uVar4,DAT_091a8308);
                  }
                  uVar7 = (ulong)*(uint *)(param_3 + 0x18);
                  uVar3 = uVar3 + 1;
                  piVar10 = piVar10 + 6;
                } while ((long)uVar3 < (long)(int)*(uint *)(param_3 + 0x18));
              }
              return;
            }
            goto LAB_04499298;
          }
        }
      }
      goto LAB_044992a0;
    }
  }
LAB_04499298:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

