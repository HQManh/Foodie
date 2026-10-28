// rea decompile_all
// name: MessagePack.TinyJsonReader$$ReadNumber
// address: 0x73834d0
// body: available
// range: 0x73834d0-0x7383853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7383828 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x738384c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7383850 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_TinyJsonReader__ReadNumber(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((DAT_09520a23 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091db850);
    DAT_09520a23 = 1;
  }
  local_80 = 0;
  local_78 = 0;
  puVar11 = (undefined8 *)(param_1 + 0x20);
  plVar10 = (long *)*puVar11;
  local_88 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (plVar10 == (long *)0x0) {
    uVar7 = thunk_FUN_03f9944c(DAT_0918b348);
    System_Text_StringBuilder___ctor(uVar7,0);
    *puVar11 = uVar7;
    thunk_FUN_03f5d7b8(puVar11,uVar7);
    plVar10 = (long *)*puVar11;
  }
  else {
    System_Text_StringBuilder__set_Length(plVar10,0,0);
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
LAB_07383818:
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    uVar5 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
    if (uVar5 == 0xffffffff) {
      bVar4 = false;
LAB_07383690:
      if (plVar10 == (long *)0x0) goto LAB_07383818;
    }
    else {
      bVar4 = false;
      do {
        if (0xffff < (int)uVar5) {
          if (*(long *)(lVar2 + 0x28) == local_58) {
            uVar7 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar7,DAT_091db850);
          }
          goto LAB_07383850;
        }
        uVar1 = uVar5 & 0xffff;
        if (uVar1 < 0x3b) {
          if (uVar1 < 0x23) {
            if ((uVar5 & 0x3d) == 0x20) goto LAB_07383690;
          }
          else if (((uVar5 & 0xffff) == 0x2c) || ((uVar5 & 0xffff) == 0x3a)) goto LAB_07383690;
        }
        else {
          if (uVar1 < 0x5e) {
            iVar3 = -0x5b;
          }
          else {
            iVar3 = -0x7b;
          }
          if ((uVar5 + iVar3 & 0xfffd) == 0) goto LAB_07383690;
        }
        uVar5 = MessagePack_TinyJsonReader__ReadChar(param_1);
        if (plVar10 == (long *)0x0) goto LAB_07383818;
        System_Text_StringBuilder__Append(plVar10,uVar5,0);
        uVar5 = (uVar5 & 0xffff) - 0x2e;
        if ((uVar5 < 0x38) && ((1L << ((ulong)uVar5 & 0x3f) & 0x80000000800001U) != 0)) {
          bVar4 = true;
        }
        plVar6 = *(long **)(param_1 + 0x10);
        if (plVar6 == (long *)0x0) goto LAB_07383818;
        uVar5 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
      } while (uVar5 != 0xffffffff);
    }
    uVar7 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    if (bVar4) {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182ff8);
      }
      uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      System_Double__TryParse(uVar7,0xe7,uVar8,&local_78,0);
      *(undefined1 *)(param_1 + 0x2c) = 3;
      *(undefined8 *)(param_1 + 0x30) = local_78;
    }
    else {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182ff8);
      }
      uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar9 = System_Int64__TryParse(uVar7,7,uVar8,&local_80,0);
      if ((uVar9 & 1) == 0) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar9 = System_UInt64__TryParse(uVar7,7,uVar8,&local_88,0);
        if ((uVar9 & 1) == 0) {
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091837d8);
          }
          uVar9 = System_Decimal__TryParse(uVar7,0x6f,uVar8,&local_70,0);
          if ((uVar9 & 1) != 0) {
            *(undefined1 *)(param_1 + 0x2c) = 6;
            *(undefined8 *)(param_1 + 0x50) = uStack_68;
            *(undefined8 *)(param_1 + 0x48) = local_70;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x2c) = 5;
          *(undefined8 *)(param_1 + 0x40) = local_88;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x2c) = 4;
        *(undefined8 *)(param_1 + 0x38) = local_80;
      }
    }
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
LAB_07383850:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

