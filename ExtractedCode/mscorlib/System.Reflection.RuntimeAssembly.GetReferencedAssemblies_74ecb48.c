// rea decompile_all
// name: System.Reflection.Assembly$$GetReferencedAssemblies
// address: 0x74ecb48
// body: available
// range: 0x74ecb48-0x74ecb4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074e96bc) */
/* WARNING: Removing unreachable block (ram,0x074e96b4) */

long System_Reflection_Assembly__GetReferencedAssemblies(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iStack_48;
  undefined8 uStack_38;
  
  if ((DAT_095215d1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fbd0);
    FUN_03f5c2a4(&DAT_09181610);
    DAT_095215d1 = 1;
  }
  uStack_38 = 0;
  uVar2 = FUN_03f65154(param_1);
  Mono_SafeGPtrArrayHandle___ctor(&uStack_38,uVar2,0);
  iVar1 = Mono_SafeGPtrArrayHandle__get_Length(&uStack_38,0);
  lVar3 = FUN_03f5c394(DAT_0917fbd0);
  if (0 < iVar1) {
    uVar5 = 0;
    lVar6 = 0x20;
    do {
      lVar4 = thunk_FUN_03f9944c(DAT_09181610);
      System_Object___ctor(lVar4,0);
      *(undefined4 *)(lVar4 + 0x58) = 1;
      uVar2 = Mono_RuntimeGPtrArrayHandle__Lookup(&uStack_38,uVar5 & 0xffffffff,0);
      uVar2 = System_IntPtr__op_Explicit(uVar2,0);
      System_Reflection_AssemblyName__FillName(lVar4,uVar2,0,1,0,1,1);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(long *)(lVar3 + uVar5 * 8 + 0x20) = lVar4;
      thunk_FUN_03f5d7b8(lVar3 + lVar6,lVar4);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((long)uVar5 < (long)iVar1);
  }
  iStack_48 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = Mono_RuntimeGPtrArrayHandle__Lookup(&uStack_38,iStack_48,0);
      uVar2 = System_IntPtr__op_Explicit(uVar2,0);
      thunk_FUN_03f61edc(uVar2,1,0);
      iStack_48 = iStack_48 + 1;
    } while (iStack_48 < iVar1);
  }
  Mono_SafeGPtrArrayHandle__Dispose(&uStack_38,0);
  return lVar3;
}

