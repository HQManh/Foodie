// rea decompile_all
// name: __cxa_call_unexpected
// address: 0x404ade4
// body: available
// range: 0x404ade4-0x404afe3 inclusive
// range: 0x404aff4-0x404afff inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x404ae10 to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x404affc to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cxa_call_unexpected(long param_1)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  byte *extraout_x9;
  undefined8 uVar8;
  long unaff_x22;
  undefined *unaff_x24;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar14;
  undefined **local_70;
  byte *local_68;
  byte *pbVar13;
  
  if (param_1 == 0) {
    __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
  __cxa_begin_catch();
  uVar4 = FUN_04049b1c(param_1);
  if ((uVar4 & 1) == 0) {
    uVar5 = std::get_terminate();
    uVar10 = std::get_unexpected();
    uVar8 = 0;
    lVar9 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + -0x40);
    uVar5 = *(undefined8 *)(param_1 + -0x38);
    lVar9 = param_1 + -0x60;
    unaff_x24 = *(undefined **)(param_1 + -0x18);
    uVar8 = *(undefined8 *)(param_1 + -0x10);
    unaff_x22 = (long)*(int *)(param_1 + -0x24);
  }
  FUN_0402ee78(uVar10);
  __cxa_begin_catch();
  if ((uVar4 & 1) == 0) {
LAB_0404af70:
    __cxa_end_catch();
    FUN_0402eec4(uVar5);
  }
  else {
    local_68 = unaff_x24 + 1;
    FUN_0404b004(&local_68,*unaff_x24,uVar8);
    bVar1 = *local_68;
    if (bVar1 != 0xff) goto LAB_0404ae8c;
    do {
      FUN_0402eec4(uVar5);
      local_68 = extraout_x9;
LAB_0404ae8c:
      uVar4 = 0;
      uVar11 = 0;
      pbVar13 = local_68 + 1;
      do {
        pbVar12 = pbVar13 + 1;
        bVar3 = *pbVar13;
        uVar2 = uVar4 & 0x3f;
        uVar4 = uVar4 + 7;
        uVar11 = ((ulong)bVar3 & 0x7f) << uVar2 | uVar11;
        pbVar13 = pbVar12;
      } while ((char)bVar3 < '\0');
      local_68 = pbVar12;
      plVar6 = (long *)__cxa_get_globals_fast();
      lVar14 = *plVar6;
    } while (lVar14 == 0);
    bVar3 = FUN_04049b1c(lVar14 + 0x60);
    if ((bVar3 & lVar14 != lVar9) == 1) {
      uVar10 = *(undefined8 *)(lVar14 + 0x10);
      lVar9 = FUN_04049b10(lVar14 + 0x60);
      if (lVar9 == 0x434c4e47432b2b01) {
        lVar9 = *(long *)(lVar14 + 8);
      }
      else {
        lVar9 = lVar14 + 0x80;
      }
      uVar4 = FUN_0404b1f0(unaff_x22,pbVar12 + uVar11,bVar1,uVar10,lVar9,param_1,uVar8);
      if ((uVar4 & 1) == 0) {
        lVar9 = plVar6[1];
        *(int *)(lVar14 + 0x38) = -*(int *)(lVar14 + 0x38);
        *(int *)(plVar6 + 1) = (int)lVar9 + 1;
        __cxa_end_catch();
        __cxa_end_catch();
        __cxa_begin_catch(lVar14 + 0x60);
        uVar10 = __cxa_rethrow();
        goto LAB_0404afd4;
      }
    }
    unaff_x24 = &std::bad_exception::vtable;
    local_70 = &PTR__bad_alloc_08fad2b0;
    uVar4 = FUN_0404b1f0(unaff_x22,pbVar12 + uVar11,bVar1,&std::bad_exception::typeinfo,&local_70,
                         param_1,uVar8);
    if ((uVar4 & 1) != 0) {
      std::bad_alloc::~bad_alloc((bad_alloc *)&local_70);
      goto LAB_0404af70;
    }
  }
  __cxa_end_catch();
  puVar7 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar7 = unaff_x24 + 0x10;
  uVar10 = __cxa_throw(puVar7,&std::bad_exception::typeinfo,std::bad_alloc::~bad_alloc);
LAB_0404afd4:
  std::bad_alloc::~bad_alloc((bad_alloc *)&local_70);
  __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar10);
}

