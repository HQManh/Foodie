// rea decompile_all
// name: System.String$$Replace
// address: 0x743233c
// body: available
// range: 0x743233c-0x743264b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74325a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7432644 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7432648 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_String__Replace(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  short *psVar7;
  ulong uVar8;
  short *psVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_2a0 [520];
  long local_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((DAT_0952101e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091baae0);
    FUN_03f5c2a4(&DAT_091beb18);
    FUN_03f5c2a4(&DAT_091beb20);
    FUN_03f5c2a4(&DAT_091beb28);
    FUN_03f5c2a4(&DAT_091beb10);
    FUN_03f5c2a4(&DAT_091beb30);
    DAT_0952101e = 1;
  }
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09220350);
    System_ArgumentNullException___ctor(uVar4,uVar5,0);
  }
  else {
    if (*(int *)(param_2 + 0x10) != 0) {
      if (param_3 == 0) {
        param_3 = **(long **)(DAT_09535468 + 0xb8);
      }
      local_98 = lVar3;
      memset(auStack_2a0,0,0x200);
      FUN_0655f144(&local_90,auStack_2a0,0x80,DAT_091beb10);
      uVar10 = *(uint *)(param_2 + 0x10);
      iVar1 = *(int *)(param_1 + 0x10) - uVar10;
      if (-1 < iVar1) {
        iVar12 = 0;
        do {
          lVar3 = DAT_091beb18;
          if (0 < (int)uVar10) {
            uVar8 = (ulong)uVar10;
            psVar7 = (short *)(param_1 + 0x14 + (long)iVar12 * 2);
            psVar9 = (short *)(param_2 + 0x14);
            do {
              if (*psVar7 != *psVar9) {
                iVar12 = iVar12 + 1;
                goto LAB_07432504;
              }
              uVar8 = uVar8 - 1;
              psVar7 = psVar7 + 1;
              psVar9 = psVar9 + 1;
            } while (uVar8 != 0);
          }
          uVar2 = (uint)local_78;
          lVar11 = (long)(int)(uint)local_78;
          if ((*(ushort *)(*(long *)(DAT_091beb18 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          if ((int)(uint)uStack_88 <= (int)uVar2) {
            lVar3 = *(long *)(lVar3 + 0x20);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03f95a6c();
            }
            FUN_0655f384(&local_90,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28));
          }
          if ((uint)uStack_88 <= uVar2) {
            if (*(long *)(local_98 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            goto LAB_07432648;
          }
          *(int *)(local_90 + lVar11 * 4) = iVar12;
          uVar10 = *(uint *)(param_2 + 0x10);
          local_78 = CONCAT44(local_78._4_4_,uVar2 + 1);
          iVar12 = uVar10 + iVar12;
LAB_07432504:
        } while (iVar12 <= iVar1);
      }
      if ((uint)local_78 != 0) {
        auVar13 = FUN_0655f1ec(&local_90,DAT_091beb20);
        param_1 = System_String__ReplaceHelper(param_1,uVar10,param_3,auVar13._0_8_,auVar13._8_8_);
        FUN_074366bc(&local_90,DAT_091beb28);
      }
      if (*(long *)(local_98 + 0x28) == local_68) {
        return param_1;
      }
      goto LAB_07432648;
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0920dc40);
    uVar6 = thunk_FUN_03fc39d4(&DAT_09220350);
    System_ArgumentException___ctor(uVar4,uVar5,uVar6,0);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    uVar5 = thunk_FUN_03fc39d4(&DAT_091da360);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar5);
  }
LAB_07432648:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

