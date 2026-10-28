// rea decompile_all
// name: System.IO.Enumeration.FileSystemName$$TranslateWin32Expression
// address: 0x7591584
// body: available
// range: 0x7591584-0x759191f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7591904 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7591918 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x759191c to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_IO_Enumeration_FileSystemName__TranslateWin32Expression(long param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  short sVar4;
  uint uVar5;
  ulong uVar6;
  undefined2 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  undefined2 uVar12;
  int iVar13;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_09521b6d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba950);
    FUN_03f5c2a4(&DAT_091f8660);
    FUN_03f5c2a4(&DAT_091f8568);
    DAT_09521b6d = 1;
  }
  lStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  uVar6 = System_String__IsNullOrEmpty(param_1,0);
  lVar8 = DAT_091f8568;
  if ((((uVar6 & 1) == 0) &&
      (uVar6 = System_String__op_Equality(param_1,DAT_091f8568,0), lVar8 = DAT_091f8568,
      (uVar6 & 1) == 0)) &&
     (uVar6 = System_String__op_Equality(param_1,DAT_091f8660,0), lVar8 = DAT_091f8568,
     (uVar6 & 1) == 0)) {
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    System_Text_ValueStringBuilder___ctor(&local_90,&local_d0,0x20,0);
    if (param_1 == 0) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_0759191c;
    }
    iVar1 = *(int *)(param_1 + 0x10);
    lVar8 = param_1;
    if (0 < iVar1) {
      bVar3 = false;
      iVar13 = 0;
      do {
        uVar5 = System_String__get_Chars(param_1,iVar13,0);
        if ((uVar5 & 0xffff) == 0x3f) {
          if (DAT_09521150 == '\0') {
            FUN_03f5c2a4(&DAT_091ba998);
            DAT_09521150 = '\x01';
          }
          lVar10 = (long)(int)(uint)local_78;
          if ((int)(uint)local_80 <= (int)(uint)local_78) {
            uVar9 = 0x3e;
            goto LAB_075918c4;
          }
          if ((uint)local_78 < (uint)local_80) {
            iVar11 = (uint)local_78 + 1;
            uVar12 = 0x3e;
            goto LAB_075918a0;
          }
LAB_075918f4:
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          goto LAB_0759191c;
        }
        if ((uVar5 & 0xffff) == 0x2e) {
          if (((iVar13 == 0) || (iVar13 - iVar1 != -1)) ||
             (sVar4 = System_String__get_Chars(param_1,iVar1 + -2,0), sVar4 != 0x2a)) {
            if ((iVar13 < iVar1 + -1) &&
               ((sVar4 = System_String__get_Chars(param_1,iVar13 + 1,0), sVar4 == 0x3f ||
                (sVar4 = System_String__get_Chars(param_1,iVar13 + 1,0), sVar4 == 0x2a)))) {
              if (DAT_09521150 == '\0') {
                FUN_03f5c2a4(&DAT_091ba998);
                DAT_09521150 = '\x01';
              }
              lVar10 = (long)(int)(uint)local_78;
              if ((int)(uint)local_80 <= (int)(uint)local_78) {
                uVar9 = 0x22;
                goto LAB_075918c4;
              }
              if ((uint)local_80 <= (uint)local_78) goto LAB_075918f4;
              iVar11 = (uint)local_78 + 1;
              uVar12 = 0x22;
            }
            else {
              if (DAT_09521150 == '\0') {
                FUN_03f5c2a4(&DAT_091ba998);
                DAT_09521150 = '\x01';
              }
              lVar10 = (long)(int)(uint)local_78;
              if ((int)(uint)local_80 <= (int)(uint)local_78) {
                uVar9 = 0x2e;
LAB_075918c4:
                System_Text_ValueStringBuilder__GrowAndAppend(&local_90,uVar9,0);
                bVar3 = true;
                goto LAB_075918d0;
              }
              if ((uint)local_80 <= (uint)local_78) goto LAB_075918f4;
              iVar11 = (uint)local_78 + 1;
              uVar12 = 0x2e;
            }
LAB_075918a0:
            *(undefined2 *)(lStack_88 + lVar10 * 2) = uVar12;
            bVar3 = true;
            local_78 = CONCAT44(local_78._4_4_,iVar11);
          }
          else {
            puVar7 = (undefined2 *)
                     System_Text_ValueStringBuilder__get_Item(&local_90,(uint)local_78 + -1,0);
            bVar3 = true;
            *puVar7 = 0x3c;
          }
        }
        else {
          if (DAT_09521150 == '\0') {
            FUN_03f5c2a4(&DAT_091ba998);
            DAT_09521150 = '\x01';
          }
          lVar10 = (long)(int)(uint)local_78;
          if ((int)(uint)local_78 < (int)(uint)local_80) {
            if ((uint)local_80 <= (uint)local_78) goto LAB_075918f4;
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 + 1);
            *(short *)(lStack_88 + lVar10 * 2) = (short)uVar5;
          }
          else {
            System_Text_ValueStringBuilder__GrowAndAppend(&local_90,uVar5,0);
          }
        }
LAB_075918d0:
        iVar13 = iVar13 + 1;
      } while (iVar13 != iVar1);
      if (bVar3) {
        lVar8 = System_Text_ValueStringBuilder__ToString(&local_90,0);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return lVar8;
  }
LAB_0759191c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

