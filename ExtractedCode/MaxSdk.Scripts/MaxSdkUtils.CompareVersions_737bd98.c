// rea decompile_all
// name: MaxSdkUtils$$CompareVersions
// address: 0x737bd98
// body: available
// range: 0x737bd98-0x737c15f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x737c158 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737c15c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 MaxSdkUtils__CompareVersions(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  if ((DAT_095209ca & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca730);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_09179098);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091ecd60);
    FUN_03f5c2a4(&DAT_091ecd68);
    FUN_03f5c2a4(&DAT_09192788);
    FUN_03f5c2a4(&DAT_091f8e00);
    DAT_095209ca = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09192788);
  System_Object___ctor(lVar3,0);
  if (param_1 == 0) goto LAB_0737c158;
  uVar4 = System_String__Equals(param_1,param_2,0);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  uVar1 = System_String__Contains(param_1,DAT_091f8e00,0);
  if ((uVar1 & 1) == 0) {
LAB_0737bf14:
    iVar10 = 0;
  }
  else {
    lVar5 = FUN_03f5c394(DAT_091805f8,1);
    if (lVar5 == 0) goto LAB_0737c158;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_0737c15c;
    *(undefined8 *)(lVar5 + 0x20) = DAT_091f8e00;
    thunk_FUN_03f5d7b8();
    lVar5 = System_String__Split(param_1,lVar5,0,0);
    if (lVar5 == 0) goto LAB_0737c158;
    if ((*(int *)(lVar5 + 0x18) == 0) || (*(int *)(lVar5 + 0x18) == 1)) goto LAB_0737c15c;
    if (lVar3 == 0) goto LAB_0737c158;
    param_1 = *(long *)(lVar5 + 0x20);
    uVar4 = System_Int32__TryParse(*(undefined8 *)(lVar5 + 0x28),lVar3 + 0x10,0);
    if ((uVar4 & 1) == 0) goto LAB_0737bf14;
    iVar10 = *(int *)(lVar3 + 0x10);
  }
  if (param_2 == 0) goto LAB_0737c158;
  uVar2 = System_String__Contains(param_2,DAT_091f8e00,0);
  if ((uVar2 & 1) == 0) {
LAB_0737bfb0:
    iVar9 = 0;
  }
  else {
    lVar5 = FUN_03f5c394(DAT_091805f8,1);
    if (lVar5 == 0) goto LAB_0737c158;
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_0737c15c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(lVar5 + 0x20) = DAT_091f8e00;
    thunk_FUN_03f5d7b8();
    lVar5 = System_String__Split(param_2,lVar5,0,0);
    if (lVar5 == 0) goto LAB_0737c158;
    if ((*(int *)(lVar5 + 0x18) == 0) || (*(int *)(lVar5 + 0x18) == 1)) goto LAB_0737c15c;
    if (lVar3 == 0) goto LAB_0737c158;
    param_2 = *(long *)(lVar5 + 0x20);
    uVar4 = System_Int32__TryParse(*(undefined8 *)(lVar5 + 0x28),lVar3 + 0x10,0);
    if ((uVar4 & 1) == 0) goto LAB_0737bfb0;
    iVar9 = *(int *)(lVar3 + 0x10);
  }
  if (param_1 != 0) {
    uVar4 = System_String__Equals(param_1,param_2,0);
    if ((uVar4 & 1) != 0) {
      if ((uVar1 & uVar2 & 1) == 0) {
        if ((uVar1 & 1) != 0) {
          return 0xffffffff;
        }
        return 1;
      }
      if (iVar10 < iVar9) {
        return 0xffffffff;
      }
      if (iVar9 < iVar10) {
        return 1;
      }
    }
    uVar6 = System_String__Split(param_1,0x2e,0,0);
    uVar7 = thunk_FUN_03f9944c(DAT_09179098);
    FUN_053239c8(uVar7,lVar3,DAT_091ecd60,0);
    uVar6 = FUN_04af6d6c(uVar6,uVar7,DAT_091ca730);
    lVar5 = FUN_04b0462c(uVar6,DAT_091cae30);
    if (param_2 != 0) {
      uVar6 = System_String__Split(param_2,0x2e,0,0);
      uVar7 = thunk_FUN_03f9944c(DAT_09179098);
      FUN_053239c8(uVar7,lVar3,DAT_091ecd68,0);
      uVar6 = FUN_04af6d6c(uVar6,uVar7,DAT_091ca730);
      lVar3 = FUN_04b0462c(uVar6,DAT_091cae30);
      if ((lVar5 != 0) && (lVar3 != 0)) {
        uVar2 = (uint)*(ulong *)(lVar5 + 0x18);
        uVar8 = (uint)*(ulong *)(lVar3 + 0x18);
        uVar1 = uVar2;
        if ((int)uVar2 <= (int)uVar8) {
          uVar1 = uVar8;
        }
        if (0 < (int)uVar1) {
          uVar4 = 0;
          do {
            if ((long)uVar4 < (long)(int)uVar2) {
              if ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) == 0) goto LAB_0737c15c;
              iVar10 = *(int *)(lVar5 + 0x20 + uVar4 * 4);
            }
            else {
              iVar10 = 0;
            }
            if ((long)uVar4 < (long)(int)uVar8) {
              if ((*(ulong *)(lVar3 + 0x18) & 0xffffffff) == 0) goto LAB_0737c15c;
              iVar9 = *(int *)(lVar3 + 0x20 + uVar4 * 4);
            }
            else {
              iVar9 = 0;
            }
            if (iVar10 < iVar9) {
              return 0xffffffff;
            }
            if (iVar9 < iVar10) {
              return 1;
            }
            uVar4 = uVar4 + 1;
          } while (uVar1 != uVar4);
        }
        return 0;
      }
    }
  }
LAB_0737c158:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

