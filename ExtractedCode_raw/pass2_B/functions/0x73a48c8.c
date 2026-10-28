// rea decompile_all
// name: MessagePack.SipHash$$.ctor
// address: 0x73a48c8
// body: available
// range: 0x73a48c8-0x73a4bc7 inclusive
// range: 0x73a4c28-0x73a4c2b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73a4bac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a4bc4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a4c28 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073a4bb0) */
/* WARNING: Removing unreachable block (ram,0x073a4bc0) */

void MessagePack_SipHash___ctor(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long **pplStack_78;
  long *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_09520b7f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_091ba910);
    FUN_03f5c2a4(&DAT_091ba8e8);
    FUN_03f5c2a4(&DAT_091ba930);
    DAT_09520b7f = 1;
  }
  local_70 = (long *)0x0;
  System_Object___ctor(param_1,0);
  local_70 = (long *)System_Security_Cryptography_RandomNumberGenerator__Create(0);
  pplStack_78 = &local_70;
  local_80 = 0;
  local_90 = 0;
  uStack_88 = 0;
  if (local_70 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    (**(code **)(*local_70 + 0x1b8))(local_70,&local_90,0x10,*(undefined8 *)(*local_70 + 0x1c0));
    auVar8 = FUN_06108530(&local_90,0x10,DAT_091ba930);
    if (DAT_09520c0c == '\0') {
      FUN_03f5c2a4(&DAT_091d3050);
      DAT_09520c0c = '\x01';
    }
    if (DAT_09520c06 == '\0') {
      FUN_03f5c2a4(&DAT_091d3020);
      FUN_03f5c2a4(&DAT_091b9798);
      DAT_09520c06 = '\x01';
    }
    if (auVar8._8_4_ < 8) {
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0x1c,0);
    }
    puVar3 = (ulong *)FUN_04c072ac(auVar8._0_8_,auVar8._8_8_,DAT_091d3020);
    lVar4 = *(long *)(DAT_091ba910 + 0x20);
    *(ulong *)(param_1 + 0x10) = *puVar3 ^ 0x736f6d6570736575;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    auVar8 = FUN_06108530(&uStack_88,8,DAT_091ba930);
    if (DAT_09520c0c == '\0') {
      FUN_03f5c2a4(&DAT_091d3050);
      DAT_09520c0c = '\x01';
    }
    if (DAT_09520c06 == '\0') {
      FUN_03f5c2a4(&DAT_091d3020);
      FUN_03f5c2a4(&DAT_091b9798);
      DAT_09520c06 = '\x01';
    }
    if (auVar8._8_4_ < 8) {
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0x1c,0);
    }
    puVar3 = (ulong *)FUN_04c072ac(auVar8._0_8_,auVar8._8_8_,DAT_091d3020);
    plVar2 = local_70;
    *(ulong *)(param_1 + 0x18) = *puVar3 ^ 0x646f72616e646f6d;
    if (local_70 != (long *)0x0) {
      lVar4 = *local_70;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185a58) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_073a4b5c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_70,DAT_09185a58,0);
LAB_073a4b5c:
      (*(code *)*puVar5)(plVar2,puVar5[1]);
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

