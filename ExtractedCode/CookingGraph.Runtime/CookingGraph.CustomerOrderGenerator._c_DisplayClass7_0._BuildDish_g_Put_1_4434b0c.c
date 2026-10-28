// rea decompile_all
// name: CookingGraph.CustomerOrderGenerator.<>c__DisplayClass7_0$$<BuildDish>g__Put|1
// address: 0x4434b0c
// body: available
// range: 0x4434b0c-0x4434ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4434eac to 0x4434f60 CookingGraph.CustomerOrderGenerator.<>c__DisplayClass7_0$$<BuildDish>g__PutLeaf|2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4434eb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4434eb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4434eb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4434ebc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4434ec0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong CookingGraph_CustomerOrderGenerator_<>c__DisplayClass7_0__<BuildDish>g__Put_1
                (long param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_09517fb8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9da8);
    FUN_03f5c2a4(&DAT_091c9ae0);
    FUN_03f5c2a4(&DAT_091c9f60);
    FUN_03f5c2a4(&DAT_091a2630);
    FUN_03f5c2a4(&DAT_091a2638);
    FUN_03f5c2a4(&DAT_091a2640);
    FUN_03f5c2a4(&DAT_09179308);
    FUN_03f5c2a4(&DAT_091785c8);
    FUN_03f5c2a4(&DAT_0917b598);
    FUN_03f5c2a4(&DAT_091acfc8);
    FUN_03f5c2a4(&DAT_091abc38);
    FUN_03f5c2a4(&DAT_0918f990);
    FUN_03f5c2a4(&DAT_091e83c8);
    FUN_03f5c2a4(&DAT_0918f968);
    FUN_03f5c2a4(&DAT_091e83d0);
    FUN_03f5c2a4(&DAT_0918f970);
    DAT_09517fb8 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0918f968);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    puVar10 = (undefined8 *)(lVar2 + 0x10);
    *puVar10 = param_3;
    thunk_FUN_03f5d7b8(puVar10,param_3);
    plVar9 = *(long **)(param_1 + 0x18);
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917b598) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04434ca0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917b598,0);
LAB_04434ca0:
      lVar5 = (*(code *)*puVar3)(plVar9,param_2,puVar3[1]);
      if (lVar5 != 0) {
        if (*(long *)(lVar5 + 0x40) == 0) {
          uVar6 = CookingGraph_CustomerOrderGenerator_<>c__DisplayClass7_0__<BuildDish>g__PutLeaf_2
                            (param_1,lVar5,*puVar10);
          return uVar6;
        }
        uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0x40) + 0x50);
        uVar4 = thunk_FUN_03f9944c(DAT_091785c8);
        FUN_05322d94(uVar4,lVar2,DAT_091e83c8,0);
        lVar2 = FUN_04ae3154(uVar8,uVar4,DAT_091c9ae0);
        if ((lVar2 != 0) && (*(long *)(lVar2 + 0x18) != 0)) {
          FUN_057e185c(&local_98,*(long *)(lVar2 + 0x18),DAT_091abc38);
          local_70 = local_88;
          uStack_78 = puStack_90;
          local_80 = local_98;
          local_98 = 0;
          puStack_90 = &local_80;
          do {
            uVar1 = FUN_071bd28c(&local_80,DAT_091a2638);
            if ((uVar1 & 1) == 0) break;
            lVar2 = thunk_FUN_03f9944c(DAT_0918f970);
            System_Object___ctor(lVar2,0);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar9 = (long *)(lVar2 + 0x10);
            *plVar9 = local_70;
            thunk_FUN_03f5d7b8(plVar9);
            uVar8 = *(undefined8 *)(param_1 + 0x20);
            uVar4 = thunk_FUN_03f9944c(DAT_09179308);
            FUN_05322d94(uVar4,lVar2,DAT_091e83d0,0);
            lVar2 = FUN_04ae5fd0(uVar8,uVar4,DAT_091c9da8);
            if (lVar2 == 0) break;
            lVar5 = thunk_FUN_03f9944c(DAT_0918f990);
            CookingGraph_CustomerOrderGenerator_Slot___ctor();
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar11 = *(long *)(lVar5 + 0x18);
            uVar4 = FUN_04aea2a0(*(undefined8 *)(lVar2 + 0x18),DAT_091c9f60);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550(uVar4,uVar4);
            }
            FUN_057e0e78(lVar11,uVar4,DAT_091acfc8);
            if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar6 = CookingGraph_CustomerOrderGenerator_<>c__DisplayClass7_0__<BuildDish>g__PutLeaf_2
                              (param_1,lVar5,*(undefined8 *)(*plVar9 + 0x18));
          } while ((uVar6 & 1) != 0);
          FUN_071bd288(&local_80,DAT_091a2630);
          return (ulong)((uVar1 ^ 1) & 1);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

