// rea decompile_all
// name: FUN_0404a858
// address: 0x404a858
// body: available
// range: 0x404a858-0x404ade3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x404ad5c to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0404a858(ulong *param_1,uint param_2,uint param_3,ulong *param_4,undefined8 param_5,
                 ulong *param_6)

{
  byte bVar1;
  ulong *puVar2;
  byte bVar3;
  char *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  undefined4 uVar15;
  ulong uVar16;
  ulong uVar17;
  byte *extraout_x9;
  ulong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  byte *pbVar24;
  ulong *puVar25;
  long lVar26;
  undefined **ppuStack_120;
  byte *pbStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong uStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  byte *pbStack_c8;
  ulong uStack_c0;
  ulong *puStack_b8;
  uint local_a4;
  ulong *local_a0;
  uint local_94;
  ulong *local_90;
  ulong local_88;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  ulong *local_68;
  
  uVar22 = (ulong)param_2;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 3;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if ((param_2 & 1) == 0) {
    if ((param_2 >> 1 & 1) == 0) {
      return;
    }
    if (((param_2 ^ 0xffffffff) & 0xc) == 0) {
      uVar15 = 2;
      goto LAB_0404ac4c;
    }
  }
  else if ((param_2 & 0xe) != 0) {
    return;
  }
  local_90 = param_4;
  pcVar4 = (char *)FUN_0404c454(param_5);
  if (pcVar4 != (char *)0x0) {
    param_1[2] = (ulong)pcVar4;
    local_a4 = param_3;
    puVar5 = (ulong *)FUN_0404c4e0(param_5);
    uVar6 = FUN_0404c488(param_5);
    local_70 = (byte *)(pcVar4 + 1);
    if (*pcVar4 == -1) {
      pbVar24 = (byte *)(pcVar4 + 2);
      bVar1 = *local_70;
      uVar7 = uVar6;
    }
    else {
      uVar7 = FUN_0404b004(&local_70,*pcVar4,0);
      pbVar24 = local_70 + 1;
      bVar1 = *local_70;
    }
    local_88 = (ulong)bVar1;
    if (local_88 == 0xff) {
      local_80 = (byte *)0x0;
    }
    else {
      uVar18 = 0;
      uVar16 = 0;
      pbVar19 = pbVar24;
      do {
        pbVar24 = pbVar19 + 1;
        bVar1 = *pbVar19;
        uVar17 = uVar18 & 0x3f;
        uVar18 = uVar18 + 7;
        uVar16 = ((ulong)bVar1 & 0x7f) << uVar17 | uVar16;
        pbVar19 = pbVar24;
      } while ((char)bVar1 < '\0');
      local_80 = pbVar24 + uVar16;
    }
    uVar18 = 0;
    uVar16 = 0;
    puVar14 = (ulong *)((long)puVar5 + ~uVar6);
    puVar25 = (ulong *)(ulong)*pbVar24;
    pbVar24 = pbVar24 + 1;
    do {
      pbVar19 = pbVar24 + 1;
      bVar1 = *pbVar24;
      uVar6 = uVar18 & 0x3f;
      uVar18 = uVar18 + 7;
      uVar16 = ((ulong)bVar1 & 0x7f) << uVar6 | uVar16;
      pbVar24 = pbVar19;
    } while ((char)bVar1 < '\0');
    local_78 = pbVar19;
    local_70 = pbVar19;
    do {
      if (pbVar19 + (uVar16 & 0xffffffff) <= local_78) break;
      puVar5 = (ulong *)FUN_0404b004(&local_78,puVar25,0);
      lVar8 = FUN_0404b004(&local_78,puVar25,0);
      lVar9 = FUN_0404b004(&local_78,puVar25,0);
      uVar6 = 0;
      uVar18 = 0;
      pbVar24 = local_78;
      do {
        local_78 = pbVar24 + 1;
        bVar1 = *pbVar24;
        uVar17 = uVar6 & 0x3f;
        uVar6 = uVar6 + 7;
        uVar18 = ((ulong)bVar1 & 0x7f) << uVar17 | uVar18;
        pbVar24 = local_78;
      } while ((char)bVar1 < '\0');
      if ((puVar5 <= puVar14) && (puVar14 < (ulong *)(lVar8 + (long)puVar5))) {
        if (lVar9 == 0) goto LAB_0404ac48;
        param_1[3] = lVar9 + uVar7;
        if (uVar18 != 0) {
          puVar5 = (ulong *)(ulong)local_a4;
          uVar7 = local_88 & 0xf;
          pbVar19 = pbVar19 + uVar18 + (uVar16 & 0xffffffff) + -1;
          local_a0 = local_90 + 4;
          local_94 = 0x1c1dU >> uVar7 & 1;
          uVar6 = 0;
          goto LAB_0404aa98;
        }
        uVar15 = 6;
        if ((param_2 & 1) != 0) {
          uVar15 = 8;
        }
        goto LAB_0404ac4c;
      }
    } while (puVar5 <= puVar14);
    __cxa_begin_catch(local_90);
    if ((local_a4 & 1) != 0) {
      do {
        FUN_0402eec4(local_90[-7]);
LAB_0404ad50:
        __cxa_begin_catch(local_90);
      } while (((ulong)puVar5 & 1) != 0);
    }
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
LAB_0404ac48:
  uVar15 = 8;
  goto LAB_0404ac4c;
LAB_0404aa98:
  puVar14 = local_90;
  uVar18 = 0;
  uVar16 = 0;
  pbVar24 = pbVar19;
  do {
    pbVar20 = pbVar24 + 1;
    bVar1 = *pbVar24;
    uVar17 = uVar18 & 0x3f;
    uVar18 = uVar18 + 7;
    uVar16 = ((ulong)bVar1 & 0x7f) << uVar17 | uVar16;
    pbVar24 = pbVar20;
  } while ((char)bVar1 < '\0');
  uVar17 = -1L << (uVar18 & 0x3f);
  if (0x3f < uVar18 || bVar1 < 0x40) {
    uVar17 = 0;
  }
  uVar16 = uVar16 | uVar17;
  uVar18 = uVar6;
  if ((long)uVar16 < 1) {
    uVar18 = (ulong)((uint)(uVar16 == 0) | (uint)uVar6);
    if ((uVar16 != 0) && ((param_2 >> 3 & 1) == 0)) {
      if (((ulong)puVar5 & 1) == 0) {
        *param_1 = uVar16;
        param_1[1] = (ulong)pbVar19;
        goto LAB_0404acec;
      }
      lVar8 = FUN_04049b10(local_90);
      puVar10 = local_a0;
      if (lVar8 == 0x434c4e47432b2b01) {
        puVar10 = (ulong *)puVar14[-0xb];
      }
      if ((puVar10 == (ulong *)0x0) || (puVar14[-10] == 0)) {
LAB_0404ad70:
        __cxa_begin_catch(puVar14);
        FUN_0402eec4(puVar14[-7]);
        param_1 = puVar14;
        goto LAB_0404ad84;
      }
      uVar17 = FUN_0404b1f0(uVar16,local_80,local_88,puVar14[-10],puVar10,puVar14,0);
      param_6 = puVar14;
      uVar18 = uVar6;
      puVar25 = puVar10;
      if ((uVar17 & 1) != 0) {
        if ((param_2 & 1) == 0) goto LAB_0404adc4;
        *param_1 = uVar16;
        param_1[1] = (ulong)pbVar19;
        uVar15 = 6;
        param_1[4] = (ulong)puVar10;
        goto LAB_0404ac4c;
      }
    }
  }
  else {
    if (local_80 == (byte *)0x0) goto LAB_0404ad50;
    if (0xc < (uint)uVar7) goto LAB_0404ad50;
    if (local_94 == 0) goto LAB_0404ad50;
    local_68 = (ulong *)(local_80 + *(long *)(&UNK_023b2d48 + uVar7 * 8) * uVar16);
    puVar10 = (ulong *)FUN_0404b004(&local_68,local_88,0);
    puVar2 = local_90;
    if (puVar10 == (ulong *)0x0) {
      puVar10 = puVar25;
      if ((param_2 & 0xd) != 0) {
        *param_1 = uVar16;
        param_1[1] = (ulong)pbVar19;
LAB_0404acec:
        puVar5 = local_90;
        lVar8 = FUN_04049b10(local_90);
        if (lVar8 == 0x434c4e47432b2b01) {
          local_a0 = (ulong *)puVar5[-0xb];
        }
        param_1[4] = (ulong)local_a0;
        uVar15 = 6;
        goto LAB_0404ac4c;
      }
LAB_0404ad84:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x2ec,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_HANDLER_FRAME | _UA_FORCE_UNWIND)");
LAB_0404ada4:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x306,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_FORCE_UNWIND)");
LAB_0404adc4:
      lVar8 = __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x327,
                        "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                        ,"actions & _UA_SEARCH_PHASE");
      pcStack_108 = __cxa_call_unexpected;
      uStack_d8 = 0xffffffffffffffff;
      puStack_110 = &stack0xffffffffffffffa0;
      uStack_100 = uVar7;
      puStack_f8 = puVar5;
      puStack_f0 = puVar10;
      uStack_e8 = uVar16;
      pbStack_e0 = pbVar19;
      uStack_d0 = uVar22;
      pbStack_c8 = pbVar20;
      uStack_c0 = uVar6;
      puStack_b8 = param_1;
      if (lVar8 == 0) {
        __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      __cxa_begin_catch();
      uVar6 = FUN_04049b1c(lVar8);
      if ((uVar6 & 1) == 0) {
        uVar11 = std::get_terminate();
        uVar23 = std::get_unexpected();
        uVar21 = 0;
        lVar9 = 0;
      }
      else {
        uVar23 = *(undefined8 *)(lVar8 + -0x40);
        uVar11 = *(undefined8 *)(lVar8 + -0x38);
        lVar9 = lVar8 + -0x60;
        pbVar19 = *(byte **)(lVar8 + -0x18);
        uVar21 = *(undefined8 *)(lVar8 + -0x10);
        uVar22 = (ulong)*(int *)(lVar8 + -0x24);
      }
      FUN_0402ee78(uVar23);
      __cxa_begin_catch();
      if ((uVar6 & 1) == 0) goto LAB_0404af70;
      pbStack_118 = pbVar19 + 1;
      FUN_0404b004(&pbStack_118,*pbVar19,uVar21);
      bVar1 = *pbStack_118;
      if (bVar1 != 0xff) goto LAB_0404ae8c;
      do {
        FUN_0402eec4(uVar11);
        pbStack_118 = extraout_x9;
LAB_0404ae8c:
        uVar6 = 0;
        uVar7 = 0;
        pbVar24 = pbStack_118 + 1;
        do {
          pbVar20 = pbVar24 + 1;
          bVar3 = *pbVar24;
          uVar18 = uVar6 & 0x3f;
          uVar6 = uVar6 + 7;
          uVar7 = ((ulong)bVar3 & 0x7f) << uVar18 | uVar7;
          pbVar24 = pbVar20;
        } while ((char)bVar3 < '\0');
        pbStack_118 = pbVar20;
        plVar12 = (long *)__cxa_get_globals_fast();
        lVar26 = *plVar12;
      } while (lVar26 == 0);
      bVar3 = FUN_04049b1c(lVar26 + 0x60);
      if ((bVar3 & lVar26 != lVar9) == 1) {
        uVar23 = *(undefined8 *)(lVar26 + 0x10);
        lVar9 = FUN_04049b10(lVar26 + 0x60);
        if (lVar9 == 0x434c4e47432b2b01) {
          lVar9 = *(long *)(lVar26 + 8);
        }
        else {
          lVar9 = lVar26 + 0x80;
        }
        uVar6 = FUN_0404b1f0(uVar22,pbVar20 + uVar7,bVar1,uVar23,lVar9,lVar8,uVar21);
        if ((uVar6 & 1) == 0) {
          lVar8 = plVar12[1];
          *(int *)(lVar26 + 0x38) = -*(int *)(lVar26 + 0x38);
          *(int *)(plVar12 + 1) = (int)lVar8 + 1;
          __cxa_end_catch();
          __cxa_end_catch();
          __cxa_begin_catch(lVar26 + 0x60);
          uVar23 = __cxa_rethrow();
          goto LAB_0404afd4;
        }
      }
      pbVar19 = &std::bad_exception::vtable;
      ppuStack_120 = &PTR__bad_alloc_08fad2b0;
      uVar22 = FUN_0404b1f0(uVar22,pbVar20 + uVar7,bVar1,&std::bad_exception::typeinfo,&ppuStack_120
                            ,lVar8,uVar21);
      if ((uVar22 & 1) != 0) {
        std::bad_alloc::~bad_alloc((bad_alloc *)&ppuStack_120);
LAB_0404af70:
        __cxa_end_catch();
        FUN_0402eec4(uVar11);
      }
      __cxa_end_catch();
      puVar13 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar13 = pbVar19 + 0x10;
      uVar23 = __cxa_throw(puVar13,&std::bad_exception::typeinfo,std::bad_alloc::~bad_alloc);
LAB_0404afd4:
      std::bad_alloc::~bad_alloc((bad_alloc *)&ppuStack_120);
      __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
      FUN_0404c2dc(uVar23);
    }
    if (((ulong)puVar5 & 1) != 0) {
      lVar8 = FUN_04049b10(local_90);
      local_68 = local_a0;
      if (lVar8 == 0x434c4e47432b2b01) {
        local_68 = (ulong *)puVar2[-0xb];
      }
      if ((local_68 == (ulong *)0x0) || (puVar2[-10] == 0)) {
        __cxa_begin_catch(puVar2);
        FUN_0402eec4(puVar2[-7]);
        puVar14 = param_6;
        puVar5 = puVar2;
        goto LAB_0404ad70;
      }
      uVar17 = (**(code **)(*puVar10 + 0x20))(puVar10,puVar2[-10],&local_68);
      puVar5 = (ulong *)(ulong)local_a4;
      puVar25 = puVar10;
      if ((uVar17 & 1) != 0) {
        if ((param_2 & 9) != 0) {
          *param_1 = uVar16;
          param_1[1] = (ulong)pbVar19;
          *(undefined4 *)(param_1 + 5) = 6;
          param_1[4] = (ulong)local_68;
          return;
        }
        goto LAB_0404ada4;
      }
    }
  }
  uVar6 = 0;
  uVar16 = 0;
  do {
    bVar1 = *pbVar24;
    uVar17 = uVar6 & 0x3f;
    uVar6 = uVar6 + 7;
    uVar16 = ((ulong)bVar1 & 0x7f) << uVar17 | uVar16;
    pbVar24 = pbVar24 + 1;
  } while ((char)bVar1 < '\0');
  uVar17 = -1L << (uVar6 & 0x3f);
  if (0x3f < uVar6 || bVar1 < 0x40) {
    uVar17 = 0;
  }
  if ((uVar16 | uVar17) == 0) goto LAB_0404ac88;
  pbVar19 = pbVar20 + (uVar16 | uVar17);
  uVar6 = uVar18;
  goto LAB_0404aa98;
LAB_0404ac88:
  uVar15 = 6;
  if (((uint)uVar18 & (param_2 & 2) >> 1) == 0) {
    uVar15 = 8;
  }
LAB_0404ac4c:
  *(undefined4 *)(param_1 + 5) = uVar15;
  return;
}

